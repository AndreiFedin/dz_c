#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы.
 *Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив.
 *Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. 
 *Вывестимассив по возрастанию в файл .txt.
 */
#define LEN 1000 


int sortarr(int arr[], int n) {
    
    int i, j, k ;
    
    for ( i=0; i<n; i++ ){
        
        for ( j=n-1; j<i; j-- ){
            
                k = arr[j-1] ;
                arr[j-1] = arr[j] ;
                arr[j] = k ;  
        }
    } 
     
    return 0;   
}







int main(int argc, char *argv[]) {
    
    char *input = "input.txt";
    char *output = "output.txt";
    int  numbers[LEN/2] ;
    char c ;
    int i=0, j ;
    unsigned long  n ;
    
    
    FILE *fp;
    
    if ((fp = fopen(input, "r" )) == NULL ) {
        perror("Error occured while opening input file!");
        return 1;
    }
     while((c = fgetc(fp)) != EOF){
        
        if (c>47 && c<58) {
            fseek (fp, -1 , SEEK_CUR ) ;
            fscanf (fp, "%ld" , &n) ;
            numbers[i] = n ;
            printf ( " %d", n);
            i++ ;
        }
    }
    
    fclose (fp);

    
    sortarr(numbers, i) ;
    
    
    if ((fp = fopen(output, "w" )) == NULL ) {
        perror("Error occured while opening input file!");
        return 1;
    }
    
    for ( j=0; j<i; j++) {
        fprintf (fp, " %d", numbers[j]);
    }
    fclose (fp);    
    


    	
    return 0;
}

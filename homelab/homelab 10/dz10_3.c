#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *В файле .txt дано предложение. Необходимо определить, 
 *сколько слов заканчиваются на букву 'а'.
 *Ответ записать в файл .txt.
 */



int numberenda(FILE *fp) {
    
    int  k=0 ;
    char c, i='0';
    
    while((c = fgetc(fp)) != EOF) {
        
        c==' ' && i=='a' ? k++ : k ; 
        i=c ;
    }     
    return k;   
}

int main(int argc, char *argv[]) {
    
    char *input = "input.txt";
    char *output = "output.txt";
    
    int   n ;
    FILE *fp;
    
    if ((fp = fopen(input, "r" )) == NULL ) {
        perror("Error occured while opening input file!");
        return 1;
    }
    n = numberenda(fp) ;
    
    fclose (fp);
    
    if ((fp = fopen(output, "w" )) == NULL ) {
        perror("Error occured while opening input file!");
        return 1;
    }
    
    fprintf (fp, "%d", n);
    
    fclose (fp);    
    	
    return 0;
}

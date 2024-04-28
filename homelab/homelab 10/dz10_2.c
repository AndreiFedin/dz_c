#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *В файле .txt дана символьная строка не более 1000 символов. 
 *Необходимо заменить все буквы "а" на
 *буквы "b" и наоборот, как заглавные, так и строчные.
 *Результат записать в .txt.
 */
#define LEN 1000 


int revolveab(char *n) {
    
    int i ;
    int k = strlen(n);
    
    for ( i=0; i<k; i++ ){
        switch (n[i]) {
            case 'a' : n[i] = 'b' ; break ;
            case 'A' : n[i] = 'B' ; break ;
            case 'b' : n[i] = 'a' ; break ;
            case 'B' : n[i] = 'A' ; break ;
        } 
    }     
    return 0;   
}

int main(int argc, char *argv[]) {
    
    char *input = "input.txt";
    char *output = "output.txt";
    char  line[LEN] ;
    
    FILE *fp;
    
    if ((fp = fopen(input, "r" )) == NULL ) {
        perror("Error occured while opening input file!");
        return 1;
    }
    fscanf(fp, "%[^\n]", line);
    
    fclose (fp);
    
    revolveab(line) ;
    
    if ((fp = fopen(output, "w" )) == NULL ) {
        perror("Error occured while opening input file!");
        return 1;
    }
    
    fprintf (fp, "%s", line);
    
    fclose (fp);    
    	
    return 0;
}

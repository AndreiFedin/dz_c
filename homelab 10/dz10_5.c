#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *В файле .txt записаны символы. Необходимо разработать функцию,
 *которая меняет местами пары оседних символов
 * не обращая внимание на символы пробел. 
 *Если количество символов нечетно
 *(пробелы не считаем), то последний символ не меняем
 *Результат записать в .txt.
 */
#define LEN 1000 


int swap(FILE *fp, char *m) {
    
    int  i=0, j=0, k, n, f ;
    char c ;
    char t[LEN],temp [LEN] ;
    
    while((c = fgetc(fp)) != EOF){
      
      if (c!=' ' ) {
          
          t[j] = c ;
          j++ ;
      }
      temp[i] = c ;
      i++ ;
      
    }  
    
    
    for (k=0; k<j/2; k++) {
        f = t[2*k] ;
        t[2*k] = t[2*k+1] ; 
        t[2*k+1] = f ;
    }    
    
    for( n=0, k=0; n<i; n++ ) { 
         
         m[n] = (temp[n]!=' ') ? t[k++] : ' ' ;    
    }


    m[n] = '\0' ;  
    return 0;   
}

int main(int argc, char *argv[]) {
    
    char *input = "input.txt";
    char *output = "output.txt";
    char   lineout[LEN] ;
    
    FILE *fp;
    
    if ((fp = fopen(input, "r" )) == NULL ) {
        perror("Error occured while opening input file!");
        return 1;
    }
    
    swap(fp, lineout) ;
    fclose (fp);
    
    
    
    if ((fp = fopen(output, "w" )) == NULL ) {
        perror("Error occured while opening input file!");
        return 1;
    }
    
    fprintf (fp, "%s", lineout);
    fclose (fp);    
    	
    return 0;
}

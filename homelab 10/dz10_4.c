#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *В файле .txt строка из меленьких и больших английских букв,
 *знаков препинания и пробелов. Требуется
 *удалить из нее повторяющиеся символы и все пробелы.
 *Результат записать в .txt.
 */
#define LEN 1000 


int onerep(FILE *fp,char *m) {
    
    int  j=0, k, flag ;
    char c ;
    
    while((c = fgetc(fp)) != EOF){
        flag=0 ;
        if (c!=' ' ) {
            
            for ( k=0; k<j; k++ ) {
                if (c == m[k] )
                    flag = 1 ;       
            }            
            if (!flag){
                m[j] = c ;
                j++;
            }
        } 
    }
    m[j] = '\0' ;  
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
    
    onerep(fp, lineout) ;
    fclose (fp);
    
    
    
    if ((fp = fopen(output, "w" )) == NULL ) {
        perror("Error occured while opening input file!");
        return 1;
    }
    
    fprintf (fp, "%s", lineout);
    fclose (fp);    
    	
    return 0;
}

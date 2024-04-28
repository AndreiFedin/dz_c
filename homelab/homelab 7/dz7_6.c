#include <stdio.h>
#include <stdlib.h>

//Дана строка из английских символов, пробелов и знаков препинания. В конце строки символ точка.
//Необходимо реализовать рекурсивную функцию, которая считывает данную строку со стандартного
//потока ввода и возвращает целое число - количество символов 'a' в данной строке.



int acounter(void) {
    char n ;
    static int i=0;
    n=getchar() ;

    if ( n!='.' )    
        acounter();
    if ( n=='a' )
        i++ ; 
    return i;
}

int main(int argc, char *argv[]) {

    printf( " %d \n", acounter() ) ;
    
    system("PAUSE");	
    return 0;
}


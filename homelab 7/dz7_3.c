#include <stdio.h>
#include <stdlib.h>

//Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.



int onecalc(int n) {
    static int i=0 ;
    if (n >= 2) 
        onecalc (n/2)  ;

    return i += n%2 ; 

}

int main(int argc, char *argv[]) {
    int n ;

    scanf("%d", &n ) ;
    printf( "%d \n", onecalc(n) ) ;

   
    system("PAUSE");	
    return 0;
}


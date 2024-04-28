#include <stdio.h>
#include <stdlib.h>

//Составить функцию вычисления N!. Использовать ее при вычислении факториала

int factorial(unsigned int n) {
   
    int  i, f=1 ;
    for ( i=1; i<=n; f *=i, i++ ) ;
    
    return f;
}


int main(int argc, char *argv[]) {

    unsigned int n ;

    scanf("%d", &n);

    printf( "%ld \n", factorial(n) ) ;


    system("PAUSE");	
    return 0;
}

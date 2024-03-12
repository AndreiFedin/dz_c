#include <stdio.h>
#include <stdlib.h>

//Составить функцию, которая определяет наибольший 
//общий делитель двух натуральных чисел

int nod(int a, int b) {
   
    int  i, div=1 ;

    i = a>b?b:a ;
    while ( a%i || b%i ) {
        i-- ;
        div = i ;
    }
    return div;
}


int main(int argc, char *argv[]) {

    unsigned int a, b ;

    scanf("%d %d", &a, &b);

    printf( "%ld \n", nod(a, b) ) ;


    system("PAUSE");	
    return 0;
}

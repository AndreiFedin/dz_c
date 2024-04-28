#include <stdio.h>
#include <stdlib.h>

//Написать рекурсивную функцию возведения целого числа n в степень p.


int recurs_power(int n, int p) {

    if (p == 0) return 1 ;
    if (n == 0) return 0 ;
    if (p > 0) return n*recurs_power( n, p-1 ) ;
    if (p < 0) return recurs_power( n, p+1 )/n ;
}

int main(int argc, char *argv[]) {
    int n, p ;
    scanf("%d %d", &n, &p ) ;
    printf ("%ld\n", recurs_power(n, p)) ;
   
    system("PAUSE");	
    return 0;
}


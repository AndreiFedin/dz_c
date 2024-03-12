#include <stdio.h>
#include <stdlib.h>


//Ввести два целых числа a и b (a ? b) и 
//вывести сумму квадратов всех чисел от a до b.

int main(int argc, char *argv[])
{
    int a,b, sum=0 ;
    scanf( "%d %d", &a, &b );
    
    while( a<=b ) {

        sum += a*a ;
        a++ ;
    }
    printf ( " %d ", sum ) ;

    system("PAUSE");	
    return 0;
}

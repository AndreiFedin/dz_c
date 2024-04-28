#include <stdio.h>
#include <stdlib.h>

//Дана последовательность целых чисел через пробел, завершающаяся числом 0. Выведите все
//нечетные числа из этой последовательности, сохраняя их порядок.


void printnum(void) {
    
    int n ;
    scanf("%d", &n ) ;
    
    if ( n%2 )
        printf( " %d ", n ) ;
    if ( n!=0 )    
        printnum();
    
}

int main(int argc, char *argv[]) {
    
    printnum();

    system("PAUSE");	
    return 0;
}


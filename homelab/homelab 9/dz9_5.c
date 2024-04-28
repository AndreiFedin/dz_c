#include <stdio.h>
#include <stdlib.h>

/*
 *Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х цветов, например,
 *черного и белого (см. рисунок). Каждая клетка имеет координату, состоящую из буквы и цифры.
 *Горизонтальное расположение клетки определяется буквой от A до H, а вертикальное – цифрой
 *от 1 до 8. Заметим, что клетка с координатой А1 имеет черный цвет. Требуется по заданной
 *координате определить цвет клетки.
 */

#define SIZE_ARRAY 2 



int black_or_white( char a[ ] ) {
    
    int  c ;
    c = a[0] + a[1] ;

    c%2 ? printf("WHITE\n") : printf("BLACK\n") ;
    //printf("%d\n", a[0]) ;
    return 0;  
}

int inputarr(char arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        scanf( "%c", &arr[i] ) ;
    return i;
}


int main(int argc, char *argv[]) {
    
    char a[SIZE_ARRAY] ;
    
    inputarr(a, SIZE_ARRAY) ;

    black_or_white(a)  ;
    

    system("PAUSE");	
    return 0;
}


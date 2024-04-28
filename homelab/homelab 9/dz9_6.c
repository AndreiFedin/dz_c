#include <stdio.h>
#include <stdlib.h>

/*
 *Составить функцию которая находит след матрицы в двумерном массиве. 
 *Показать пример ее работы на матрице из 5 на 5 элементов.
 *След матрицы - это сумма элементов на главной диагонали. 
 */

#define SIZE_ARRAY 5 



int diagnumber( int a[SIZE_ARRAY][SIZE_ARRAY]) {
    
    int i, j, sum=0, n=5 ;
    
    
    for ( i=0; i<n; i++ )      
        sum += a[i][i] ;
    
  
    return sum;  
}


int inputarr( int n, int arr[n][n]) {
    
    int i,j ;
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<n; j++ )
            scanf( "%d", &arr[i][j] ) ;
    }
    return 0;
}


int main(int argc, char *argv[]) {
    
    int a[SIZE_ARRAY] [SIZE_ARRAY] ;
    
    inputarr( SIZE_ARRAY, a ) ;
    printf("%d\n", diagnumber(a) ) ;
    
    

    system("PAUSE");	
    return 0;
}

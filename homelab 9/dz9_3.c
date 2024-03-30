#include <stdio.h>
#include <stdlib.h>

/*
 *
 *определить количество положительных элементов квадратной матрицы, превышающих по
 *величине среднее арифметическое всех элементов главной диагонали. Реализовать функцию
 *среднее арифметическое главной диагонали.
 */

#define SIZE_ARRAY 5 



int diagnumber( int a[SIZE_ARRAY][SIZE_ARRAY]) {
    
    int i, j, f=0, n=5 ;
    float sum=0 ;
    
    for ( i=0; i<n; i++ )      
        sum += a[i][i] ;
        sum=1.0*sum/n ;
        //printf("%f\n", sum ) ;  
    for ( i=0; i<n; i++ ) { 
         for ( j=0; j<n; j++ )
            if ( a[i][j]>sum )        
                f++;
    }
  
     return f;  
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

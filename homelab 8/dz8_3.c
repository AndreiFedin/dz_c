#include <stdio.h>
#include <stdlib.h>

//Считать массив из 10 элементов и отсортировать его по последней цифре.


#define SIZE_ARRAY 10 

int inputarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        scanf( "%d", &arr[i] ) ;
    return i;   
}

int sortarr(int *arr, int n) {
    
    int i, j, k ;
    
    for ( i=0; i<n; i++ ){
        
        for ( j=n-1; j>i; j-- ){
            
            if ( (arr[j-1]%10) > (arr[j]%10) ) {
                k = arr[j-1] ;
                arr[j-1] = arr[j] ;
                arr[j] = k ;
            }   
        }
    } 
     
    return 0;   
}

int printarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        printf( "%d ", arr[i] ) ;
        printf( "\n" ) ;
    return 0;   
}



int main(int argc, char *argv[]) {
    
    int A[SIZE_ARRAY] ;
    
    inputarr(A, SIZE_ARRAY) ;
    sortarr(A, SIZE_ARRAY) ;
    printarr(A, SIZE_ARRAY) ;

    system("PAUSE");	
    return 0;
}

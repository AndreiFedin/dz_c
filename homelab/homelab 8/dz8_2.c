#include <stdio.h>
#include <stdlib.h>

//Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.


#define SIZE_ARRAY 12 

int inputarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        scanf( "%d", &arr[i] ) ;
    return i;   
}

int shiftarr1(int arr[], int n) {  // сдвиг с использованием  
                                   // дополнительного массива
    int i, Arr1 [n] ;
    
    for ( i=0; i<n; i++ ){
        if ( i<4 ) 
            Arr1[i]=arr[i+(n-4)] ;
        else 
            Arr1[i]=arr[i-4] ;
         
    } 
    for ( i=0; i<n; i++ )
        arr[i]=Arr1[i] ;
             
    return 0;   
}

int shiftarr2(int arr[], int n) { //последовательный сдвиг массива 
                                  // на 1 позицию несколько раз
    
    int i, j, k=4, m;
    
    for ( i=0; i<k; i++ ) {
        m = arr[n-1] ;
        for ( j=n; j!=0; j-- ) {
            arr[j] = arr[j-1] ;
        }
        arr[0] = m ;
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
    shiftarr2(A, SIZE_ARRAY) ;
    printarr(A, SIZE_ARRAY) ;

    system("PAUSE");	
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

//Считать массив из 10 элементов и отобрать в другой массив все числа, 
//у которых вторая с конца цифра (число десятков) – ноль.

#define SIZE_ARRAY 10 

int inputarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        scanf( "%d", &arr[i] ) ;
    return i;   
}

int nullarr(int *a, int *b, int n) {
    
    int i, j=0 ;
    
    for ( i=0; i<n; i++ ) {
        if ( ! ((a[i]/10)%10)  && (a[i]>9 || a[i]<-9) ) {
            b[j]=a[i] ;
            j++ ;
        }
    } 

             
    return j;   
}

int printarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        printf( "%d ", arr[i] ) ;
        printf( "\n" ) ;
    return 0;   
}



int main(int argc, char *argv[]) {
    
    int m, a[SIZE_ARRAY], b[SIZE_ARRAY] ;
    
    inputarr(a, SIZE_ARRAY) ;
    m = nullarr(a, b,  SIZE_ARRAY) ;
    printarr(b, m) ;

    system("PAUSE");	
    return 0;
}


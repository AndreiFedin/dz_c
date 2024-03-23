#include <stdio.h>
#include <stdlib.h>

//Дан массив из 10 элементов. Определить, какое число в массиве 
//встречается чаще всего.

#define SIZE_ARRAY 10 

int inputarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        scanf( "%d", &arr[i] ) ;
    return i;   
}


int often_digit(int *a, int n) {
    
    int i, j, pos=0, Arr[n] ;
    
    for ( i=0; i<n; i++ ){
        Arr[i] = 0 ;
        for ( j=0; j<n; j++ ){
            if (a[i] == a[j])
                ++Arr[i] ; 
        }
         
    } 
    //printarr(Arr, 10) ;
    for ( i=0; i<n; i++ ){
        if (Arr[pos]<Arr[i]) 
            pos=i ;
    }         
    return a[pos];   
}


int printarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        printf( "%d ", arr[i] ) ;
        printf( "\n" ) ;
    return 0;   
}



int main(int argc, char *argv[]) {
    
    int  a[SIZE_ARRAY] ;
    
    inputarr(a, SIZE_ARRAY) ;
    
    printf("%d\n", often_digit(a, SIZE_ARRAY) ) ;

    system("PAUSE");	
    return 0;
}


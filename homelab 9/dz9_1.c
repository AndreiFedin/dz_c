#include <stdio.h>
#include <stdlib.h>

/*
 *Написать функцию и программу, демонстрирующую работу данной функции, которая ставит в
 *начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок
 *следования чисел между собой. Строго согласно прототипу:
 *void sort_even_odd(int n, int a[])
 */

#define SIZE_ARRAY 12 



void sort_even_odd(int n, int a[]) {
    
    int i, Arr1 [n],Arr2 [n], j=0, k=0;
    
    for ( i=0; i<n; i++ ) {
        if (  !(a[i]%2) ) 
            Arr1[j++]=a[i] ;       
        else 
            Arr2[k++]=a[i] ;
            
    } 
    for ( i=0; i<n; i++ )
        if (i<j)
            a[i]=Arr1[i] ;
        else
            a[i]=Arr2[i-j] ;  
       
}

int printarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        printf( "%d ", arr[i] ) ;
        printf( "\n" ) ;
    return 0;   
}
int inputarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        scanf( "%d", &arr[i] ) ;
    return i;
}


int main(int argc, char *argv[]) {
    
    int a[SIZE_ARRAY] ;
    
    inputarr(a, SIZE_ARRAY) ;
    sort_even_odd(SIZE_ARRAY, a) ;
    printarr(a, SIZE_ARRAY) ;

    system("PAUSE");	
    return 0;
}


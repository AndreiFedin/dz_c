#include <stdio.h>
#include <stdlib.h>

/*
 *Написать функцию и программу, демонстрирующую работу данной функции.
 *Дан целочисленный массив из 10 элементов. Необходимо определить количество четных и
 *нечетных чисел. Если количество чётных чисел больше, чем количество нечётных, заменить
 *каждое нечетное число на произведение нечетных цифр в его десятичной записи. Если
 *количество нечётных чисел больше или равно количеству чётных, заменить каждое чётное число
 *на произведение чётных цифр в его десятичной записи.
 */

#define SIZE_ARRAY 10 



void f20(int n, int a[]) {
    
    int i, b, t, c, j=0, k=0;
    
    for ( i=0; i<n; i++ ) {
        if (  a[i]%2 ) 
            j++ ;       
        else 
            k++ ;
            
    } 
    
    if (j>=k) {
        
        for ( i=0; i<n; i++ ) {
            if (  !(a[i]%2) ) {
                b=1 ;
                t=a[i] ; 
                while( t!=0) {
                    c = t%10 ;
                    t /= 10 ;
                    b =(c%2) ? b : b*c ;
                }
                a[i]=b ;
            }
         }   
     }
     else {       
         for ( i=0; i<n; i++ ) {
            if (  (a[i]%2) ) {
                b=1 ;
                t=a[i] ; 
                while( t!=0) {
                    c = t%10 ;
                    t /= 10 ;
                    b=(c%2) ? b*c : b ;         
                }
                a[i]=b ;
            }
         }   
     }           
       
       
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
    f20(SIZE_ARRAY, a) ;
    printarr(a, SIZE_ARRAY) ;

    system("PAUSE");	
    return 0;
}


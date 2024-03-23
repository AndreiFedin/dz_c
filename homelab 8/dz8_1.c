#include <stdio.h>
#include <stdlib.h>

//Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.


#define SIZE_ARRAY 5 

int inputarr(int arr[], int n) {
    
    int i ;
    for ( i=0; i<n; i++ )
        scanf( "%d", &arr[i] ) ;
    return i;   
}

float avgarr(int arr[], int n) {
    
    int i ;
    float k ;
    for ( i=0; i<n; i++ )
         k+=arr[i];
    return  k/n;   
}





int main(int argc, char *argv[]) {
    
    int a[SIZE_ARRAY];
    inputarr(a, SIZE_ARRAY);
    printf("%.3f\n", avgarr(a, SIZE_ARRAY)) ;

    system("PAUSE");	
    return 0;
}


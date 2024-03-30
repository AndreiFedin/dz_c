#include <stdio.h>
#include <stdlib.h>

/*
 *Написать функцию и программу, демонстрирующую работу данной функции, которая определяет,
 *верно ли, что среди элементов массива есть два одинаковых. Если ответ «да», функция
 *возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
 *int is_two_same(int size, int a[]);
 */

#define SIZE_ARRAY 12 



int is_two_same(int n, int a[]) {
    
    int i, j, flag=0 ;
    
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<n; j++ ){
         
           if ( (a[i] == a[j]) & (i!=j) ) {       
               flag = 1;
               break ;
           }
         if (flag == 1)  break ;
        }      
    } 
  
     return flag;  
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
    printf("%d\n", is_two_same(SIZE_ARRAY, a) ) ;
    is_two_same(SIZE_ARRAY, a) ? printf("YES\n"):printf("NO\n") ;
    

    system("PAUSE");	
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

//ВСоставить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все
//цифры стоят по возрастанию. Используя данную функцию решить задачу.

int grow_up(unsigned int n) {
   
    int  c, k=9, flag=1 ;

    while( n ) {
        c = n%10 ;
        n /= 10 ;

        if ( c>k ) {
            flag = 0 ;
            break ; 
        }
        k = c ;
    }
    return flag;
}


int main(int argc, char *argv[]) {

    unsigned int n ;

    scanf("%d", &n);

    grow_up( n ) ? printf (" YES \n") : printf (" NO \n") ;

    system("PAUSE");	
    return 0;
}

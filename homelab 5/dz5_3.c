#include <stdio.h>
#include <stdlib.h>

//Ввести целое число и определить, верно ли, что все его цифры четные.


int main(int argc, char *argv[]) {
    int a, c, flag=1;
    scanf("%d", &a);
    while( a!=0) {
        c = a%10 ;
        a /= 10 ;
        if ( c%2 ) {
             printf (" NO /n") ;
             flag = 0 ;
             break ;
        }   
    }
    if ( flag ) {
        printf (" YES \n") ;
    }
    
    system("PAUSE");	
    return 0;
}
 

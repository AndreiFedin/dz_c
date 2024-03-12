#include <stdio.h>
#include <stdlib.h>

//Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

int main(int argc, char *argv[]) {

    int a, i=0;
    scanf("%d", &a);
    while( a!=0) {
        a /= 10 ;
        i++ ;   
    }

    switch (i) {
        case   3:  printf (" YES \n") ; break ;
        default :  printf (" NO \n") ;  break ;
    }

    system("PAUSE");	
    return 0;
}

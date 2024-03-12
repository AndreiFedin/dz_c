#include <stdio.h>
#include <stdlib.h>


//Составить логическую функцию, которая определяет, верно ли, 
//что в данном числе сумма цифр равна произведению.

int is_happy_number(int n) {
   
    int  c, mult=1, sum=0, flag=0 ;

    while( n ) {
        c = n%10 ;
        n /= 10 ;
        sum  += c ;
        mult *= c ;
    } 
  	if( mult==sum )
        flag = 1 ;
    return flag;
}


int main(int argc, char *argv[]) {
    unsigned int n ;

    scanf("%d", &n);

  	if( is_happy_number( n ) )    
        printf (" YES \n") ;   
    else
        printf (" NO \n") ;

    system("PAUSE");	
    return 0;
}

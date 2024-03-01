#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ) {
	
	unsigned int a,b100,c10,d1 ;
	
    scanf( "%d", &a) ;
    
    b100 = a/100 ;
    c10  = a%100/10 ;
    d1   = a%10 ;
    

    printf( "%d\n", b100*c10*d1 ) ;

    
    system("pause>nul") ;
    return 0 ;
}

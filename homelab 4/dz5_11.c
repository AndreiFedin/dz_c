#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    
    int a,b,c ;
    scanf("%d %d %d", &a, &b, &c) ;
    
    if ( (a+b>c) && (a+c>b) && (c+b>a) )
        printf("yes") ;
    else 
        printf("no") ;
    
    system("pause>nul") ;
	return 0;
}
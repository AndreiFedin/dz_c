#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    
    float x1,y1,x2,y2 ;
    float k,b ;
    
    scanf("%f  %f  %f  %f", &x1, &y1, &x2, &y2) ;
    
    if ( x1!=x2 ) {
        k = (y2-y1)/(x2-x1) ;
        b = x2*k-y2 ;
        printf("%.2f  %.2f", k, -b) ;
    }
    else
        printf("incorrect coordinates") ;
        
    system("pause>nul") ;
    return 0;
}
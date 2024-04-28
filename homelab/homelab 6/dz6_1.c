#include <stdio.h>
#include <stdlib.h>


//Составить функцию, которая вычисляет косинус как сумму ряда (с точностью 0.001)

float cosX ( int angle ) {

    int i=0, k, z=1 ;
    float sum=0.0, eps=0.001, t, rad ;
    
    rad = angle*3.14159/180 ;

    while ( t > eps ) {
        t=1 ;
        z *= -1 ;
        i += 2  ;
        for (k=1 ; k<=i ; k++ ) {
            t *= rad/k ;
        }
        sum = sum+z*t ;
    }

    return sum+1 ;
}



int main(int argc, char *argv[]) {
    int angle ;

     while (1) {
        printf( "Enter an angle value from 0-90 degree\n" ) ;
        scanf("%d", &angle) ;
        if ( (angle >= 0) && (angle <= 90) )
            break ;
    }

    
    printf( "cos(x)=%.3f \n", cosX(angle) ) ;

    system("PAUSE");	
    return 0;
}

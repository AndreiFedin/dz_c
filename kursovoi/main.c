#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "temp_api.h"

#define SIZE 16

sensor tarr[SIZE]  
              ={32, 14, 26, 10, 2020, 29,
                33, 14, 26, 10, 2020, 30,
                34, 14, 26, 10, 2020, 29,
                35, 14, 26, 10, 2020, 31,
                36, 14, 26, 10, 2020, 32,
                37, 14, 26, 10, 2020, 33,
                38, 14, 26, 10, 2020, 34,
                39, 14, 26, 10, 2020, 29,
                40, 14, 26, 10, 2020, 33,
                41, 14, 26, 10, 2020, 30,
                42, 14, 26, 10, 2020, 28,
                43, 14, 26, 10, 2020, 32,
                44, 14, 26, 10, 2020, 33,
                45, 14, 26, 10, 2020, 31,
                46, 14, 26, 10, 2020, 32,
                47, 14, 26, 10, 2020, 29} ;










int main(int argc, char *argv[]) {
    int k ;
    k = sizeof(tarr)/sizeof(tarr[0]) ;
    printf( " %d \n", mintempmonth (10, k, tarr ) ) ;
    printf( " %.2f \n", avgtempmonth (10, k, tarr ) ) ;


    system("PAUSE");	
    return 0;
}

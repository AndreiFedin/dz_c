#include <stdio.h>
#include <stdint.h>
#include "temp_api.h"




int maxtempmonth (int n,  int k,  sensor t[] ) {
    int temp = -100, i ;
    
    for( i=0; i<k; ++i)
       if (t[i].month == n) 
            if (temp<t[i].temperature) 
                temp = t[i].temperature ;

    return temp ;
}

int mintempmonth (int n, int k, sensor t[]  ) {
    int temp = 100, i ;
    
    for( i=0; i<k; ++i)
       if (t[i].month == n) 
            if (temp>t[i].temperature) 
                temp = t[i].temperature ;

    return temp ;
}

float avgtempmonth (int n, int k,  sensor t[]  ) {
    int  i, j=0 ;
  
    float temp = 0 ;
    for( i=0; i<k; ++i) {
       if (t[i].month == n) {
            temp += t[i].temperature ;
            j++ ;
        }
    }
       
    return  temp/j;
}

////////////////////////////////////////////////////////////


int maxtempyear (int n, int k,  sensor t[] ) {
    int temp = -100, i;
  
    for( i=0; i<k; ++i)
       if (t[i].year == n) 
            if (temp<t[i].temperature) 
                temp = t[i].temperature ;

    return temp ;
}

int mintempyear (int n, int k,  sensor t[] ) {
    int temp = 100, i;
  
    for( i=0; i<k; ++i)
       if (t[i].year == n) 
            if (temp>t[i].temperature) 
                temp = t[i].temperature ;

    return temp ;
}

float avgtempyear (int n, int k,  sensor t[] ) {
    int  i, j=0 ;
    float temp = 0 ;
    
    for( i=0; i<k; ++i) {
       if (t[i].year == n) {
            temp += t[i].temperature ;
            j++ ;
        }
    }
      

    return temp/j ;
}

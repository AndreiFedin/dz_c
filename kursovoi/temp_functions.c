#include <stdio.h>
#include "temp_functions.h"




float avgtemp (int m, int n, long k,  sensor t[] ) {
    int   mm, nn ;
    long i, j=0 ;
    float temp = 0 ;
    mm = m ;
    nn = n ;
    for( i=0; i<k; ++i) {

        if (n==0) nn = t[i].year  ;
        if (m==0) mm = t[i].month ;
        if ((t[i].month == mm) && (t[i].year == nn)) {
            temp += t[i].temperature ;
            j++ ; 
        }
    }
        if ( !j ) 
            return -1000 ;
    return  temp/j;
}
    
int mintemp (int m, int n, long k,  sensor t[] ) {
    int temp = 1000,  nn, mm;
    long i ;
    mm = m ;
    nn = n ;
    for( i=0; i<k; ++i) {
  
       if (n==0) nn = t[i].year ; 
       if (m==0) mm = t[i].month ;
       if ((t[i].month == mm) && (t[i].year == nn)) {
            if (temp>t[i].temperature) 
                temp = t[i].temperature ;
                
       }
                
    }
    
        
    return temp ;
}

int maxtemp (int m, int n, long k,  sensor t[] ) {
    int temp = -1000, nn, mm;
    long i ;
    mm = m ;
    nn = n ;
    for( i=0; i<k; ++i) {
       if (n==0) nn = t[i].year  ;
       if (m==0) mm = t[i].month ;
       if ((t[i].month == mm) && (t[i].year == nn)) {
            if (temp<t[i].temperature) 
                temp = t[i].temperature ;
       }
    }
    
    return temp ;
}

//////////////////////////////////////////////////////

void printhelp(void) {
    printf( "\n  calculation minimum maximum and average temperature use file .csv \n ") ;
    printf( " file .csv should have format YYYY;MM;DD;hh;mm;TT \n ") ;
    printf( " YYYY-year MM-month DD-day hh-hour mm-minute TT-temperature \n ") ;
    printf( "\n  Example: prog  -f example.csv -m 12    -y 2021  -s1    \n ") ;
    printf( "\n  Example: prog [-f STR]       [-m INT] [-y INT] [-s 0/1] \n\n ") ;
    
    printf( "-h       help \n ") ;
    printf( "-f STR - path to file .csv include input data ()\n ") ;
    printf( "-m INT - month number.When -m used Tmax Tmin and Tavg calculated for this month\n ") ;
    printf( "-y INT - year number.When -y used Tmax Tmin and Tavg calculated for this year\n ") ;
    printf( "-s 0   use this argument for display data from file on console \n ") ;
    printf( "-s 1   use this argument for display statistic by months  \n\n ") ;
}


/////////////////////////////////////////////////////////

void printtemp (int m, int n, long k,  sensor t[] ) {
    int   nn, mm ;
    long i;
    mm = m ;
    nn = n ;
    printf("\n") ;
    
    for( i=0; i<k; ++i) {
       if (n==0) nn = t[i].year  ;
       if (m==0) mm = t[i].month ;
       
       if ((t[i].month == mm) && (t[i].year == nn)) {
            
             printf("%d %2d %2d %2d:%2d  %d\n", t[i].year, t[i].month,
             t[i].day, t[i].hour, t[i].min, t[i].temperature );
            
        }
    }
     printf("\n") ; 
}


/////////////////////////////////////////////////////////////////////////


void sortdate(long k,  sensor t[] ) {
    
    long i, j;
    sensor mm ;
    

    
    for ( i=0; i<k; i++ ){
        
        for ( j=k-1; j>i; j-- ){
            
            if ( (((((long long)t[j-1].year*100)+
                   t[j-1].month)*100+
                   t[j-1].day)*100+
                   t[j-1].hour)*100+
                   t[j-1].min > 
                   (((((long long)t[j].year*100)+
                   t[j].month)*100+
                   t[j].day)*100+
                   t[j].hour)*100+
                   t[j].min ) {

                
                mm = t[j-1] ;
                t[j-1] = t[j] ;
                t[j] = mm ;
                
            }   
        }
    }
        
    
}

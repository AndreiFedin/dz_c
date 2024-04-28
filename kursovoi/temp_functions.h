
#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

#include <stdio.h>
#include <stdint.h>

#define MAXDATA 530000



struct SENS {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t min;
    int8_t temperature;
    //struct SENS *next;
} ;

typedef struct SENS sensor ;



int maxtemp (int m, int n, long k,  sensor t[] ) ;

int mintemp (int m, int n, long k,  sensor t[] ) ;

float avgtemp (int m, int n, long k,  sensor t[] ) ;

void printhelp(void) ;

void sortdate(long k,  sensor t[] ) ;

void printtemp (int m, int n, long k,  sensor t[] ) ;



#endif

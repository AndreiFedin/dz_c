#include <stdio.h>
#include <stdint.h>



#ifndef TEMP_API_H
#define TEMP_API_H

struct SENS {
    uint8_t min;
    uint8_t hour;
    uint8_t day;
    uint8_t month;
    uint16_t year;
    int8_t temperature ;
} ;

typedef struct SENS sensor ;

int maxtempmonth (int n,  int k,  sensor t[] );

int mintempmonth (int n,  int k, sensor t[] );

float avgtempmonth (int n,  int k,  sensor t[] );

int maxtempyear (int n,  int k,  sensor t[] );

int mintempyear (int n,  int k,  sensor t[] );

float avgtempyear (int n,  int k,  sensor t[] );

#endif

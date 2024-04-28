#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"
#include <unistd.h>






int main(int argc, char *argv[]) {
    
    int  m=0, p=0, y=0, r=0, s=2, flag=0, k,  max, min ;
    char dir[100] ;
    float  avg ;
    long i=0, j=0 ;
    FILE *fp ;
    sensor *tarr = (sensor*) malloc ( MAXDATA*sizeof(sensor)) ;
    char *str = (char*) malloc ( 100*sizeof(char)) ;
    sensor w  ;
    
    ////////////////////////////////////////////////////////////
    /**/
    while ( (p= getopt(argc,argv,"hf:m:y:s:")) != -1 ) {
       
       switch (p) {
            case 'h': 
                printhelp(); return 0;
                break ;
            case 'f': 
                strcpy(dir, optarg);
                break ;
            case 'm':
                m=atoi(optarg);
                if ( m<1 || m>12 ){
                    printf(" Incorrect argument value: %s \n", argv[optind-1]) ;
                    printf(" Try -m 1..12\n"); 
                    return -1 ;
                }
                break ;
            case 'y': 
                y=atoi(optarg);
                if ( y<1 || m>65535 ){
                    printf(" Incorrect argument value: %s \n", argv[optind-1]) ;
                    printf(" Try -y 1..65535\n"); 
                    return -2 ;
                }
                break ; 
            case 's': 
                s = atoi(optarg);
                break ;
            case '?':
                //printf("Unknown argument: %s \n", argv[optind-1]) ;
                printf("Try -h for help\n");
                return -3;
        } 
    }
 /////////////////////////////////////////////////////////////////////

    fp=fopen( dir , "r" ) ;

    if (fp==NULL) {
        printf ("Error open file\n") ;
        return -4;
    }

    while (!feof(fp) ) {
        
        r = fscanf (fp,"%d;%d;%d;%d;%d;%d", &w.year,  &w.month,
         &w.day, &w.hour, &w.min, &w.temperature ) ;
         
        j++ ;
        
        if ( r<6 ){
            fgets(str,100,fp) ;
            printf("\nError in line number %ld   %s \n", j,str ) ;
            continue ;
            
        }
        if (  w.month<1 || w.month>12 ||
              w.day<1 || w.day>31 ||  w.hour>23 || w.min>59 || 
              w.temperature<-100 || w.temperature>100 ) {
            printf("Invalid data in line number %ld  \n", j ) ;
        }
        else { 
            if(!(m || y)) 
                tarr[i++] = w ;
    
            if( y && m ) 
                if(y == w.year && m == w.month ) 
                   tarr[i++] = w ;

            if(y && (m==0)) 
                if(y == w.year) 
                   tarr[i++] = w ;

            if(m && (y==0)) 
                if ( m == w.month ) 
                    tarr[i++] = w ;
 
            if (i>MAXDATA ) { 
                flag=1 ; 
                i-- ; 
            }
        } 
             
    }
     
    fclose (fp); 

////////////////////////////////////////////////////////////////////// 
    
    //printf(" i %d  ", i);
       
    printf("\n") ;
    printf(" Statistic for") ;
    if(!(m || y))  printf(" all period ");
    if(m) printf(" %d month ", m);
    if(y) printf(" %d year", y);
    printf("\n") ; 
    if (flag) printf("Too many data for this period, only %ld used\n", i) ;
    
    if (!i) 
        printf("No data for this period\n") ;
    else {
        if( (s==1)  ){
            printf( "\nMonth\t Tmax\t Tmin\t Tavg \n" ) ;
            for ( k=1; k<=12; k++ ) {
                
                max = maxtemp (k, y, i, tarr ) ;
                min = mintemp (k, y, i, tarr ) ;
                avg = avgtemp (k, y, i, tarr ) ;
                
                if(max != -1000)
                    printf( " %d\t %d\t %d\t %.2f \n", k, max, min, avg );
                else  if(!m)
                          printf( " %d\t n\\a\t n\\a\t n\\a \n", k );
                 
            }
        }
        else {
            printf( " Tmax %d \n",maxtemp (m, y, i, tarr  ) ) ;
            printf( " Tmin %d \n", mintemp (m, y, i, tarr ) ) ;
            printf( " Tavg %.2f \n", avgtemp (m, y, i, tarr ) ) ;
            if (s==0) {
                sortdate( i, tarr ) ;
                printtemp ( m, y, i, tarr ) ; 
            }
        } 
     
    }

	//free(tarr) ;
    return 0;
}

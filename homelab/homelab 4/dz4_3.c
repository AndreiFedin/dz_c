#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    
    int a, max ;
    int s,d,e ;
    scanf("%d", &a) ;
    
    s=a/100 ;
    d=a%100/10 ;
    e=a%10 ;
    
    max=s>=d?s:d ;
    max=max>=e?max:e ;
    printf("%d", max) ;
    system("pause>nul") ;
    
    
    
   return 0;
}
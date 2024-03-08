#include <stdio.h>
#include <stdlib.h>

//¬вести целое число и Ђперевернутьї его, 
//так чтобы перва€ цифра стала последней и т.д.

int main(int argc, char *argv[]) {

    int a, c, d=0 ;
    scanf("%d", &a);
    while( a!=0) {
        c = a%10 ;
        a /= 10 ;
        d = d*10+c ;
    }
    
    printf (" %d\n", d ) ;
  
    system("PAUSE");	
    return 0;
}

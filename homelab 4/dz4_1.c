
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
    int a,b ;
    scanf("%d %d", &a, &b) ;
    if(a>=b) {
        printf("%d %d", a, b) ;
    }
    else {
        printf("%d %d", b, a) ;
    }
    system("pause>nul") ;
    return 0;
}

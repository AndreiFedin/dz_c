#include <stdio.h>
#include <stdlib.h>

//Составить рекурсивную функцию, Выведите все числа от A до B включительно, в порядке возрастания,
//если A < B, или в порядке убывания в противном случае.



void print_num(int a, int b) {

    if (a == b) 
        return ;
        
    a = (a<b) ? (a+1) : (a-1) ;
    printf ( " %d ", a ) ;
    print_num(a, b)  ;
}       

int main(int argc, char *argv[]) {
    int a, b ;
    scanf("%d %d", &a, &b ) ;
    print_num(a, b) ;
   
    system("PAUSE");	
    return 0;
}

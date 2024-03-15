#include <stdio.h>
#include <stdlib.h>

//Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, разделяя их
//пробелами или новыми строками. Необходимо реализовать рекурсивную функцию.



void print_num(int n) {

    if (n == 0)
        return ;
    print_num(n/10)  ;
    printf ( " %d ", n%10 ) ; 
    
}

int main(int argc, char *argv[]) {
    int n ;
    scanf("%d", &n ) ;
    print_num(n) ;
   
    system("PAUSE");	
    return 0;
}


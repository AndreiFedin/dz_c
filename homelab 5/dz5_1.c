#include <stdio.h>
#include <stdlib.h>


//������ ��� ����� ����� a � b (a ? b) � 
//������� ����� ��������� ���� ����� �� a �� b.

int main(int argc, char *argv[])
{
    int a,b, sum=0 ;
    scanf( "%d %d", &a, &b );
    
    while( a<=b ) {

        sum += a*a ;
        a++ ;
    }
    printf ( " %d ", sum ) ;

    system("PAUSE");	
    return 0;
}

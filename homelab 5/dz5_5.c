#include <stdio.h>
#include <stdlib.h>

//������ ����������� ����� � ���������� ��� ����� �� 10 �� ���������� �����
//  � ������� ����� ���� ����� ������������ ����


int main(int argc, char *argv[]) {
    
    
    int a, c, mult, sum, k, m ;
    scanf("%d", &a);
    for( k=10; k<=a; k++ ) {
        mult=1 ;
        sum=0 ;
        m=k ;
        while( m!=0) {
            c = m%10 ;
            m /= 10 ;
            sum  += c ;
            mult *= c ;
        }
        if( sum==mult )    
            printf (" %d\n", k ) ;   
        
    }
    
    
    system("PAUSE");	
    return 0;
}

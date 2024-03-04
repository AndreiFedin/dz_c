#int main(int argc, char *argv[]) {
    
    float x1,y1,x2,y2 ;
    float k,b ;
    
    scanf("%f  %f  %f  %f", &x1, &y1, &x2, &y2) ;
    
    k = (y2-y1)/(x2-x1) ;
    
    b = y2/k-x2 ;
    
    printf("%.2f  %.2f", k, b) ;
    
    system("pause>nul") ;
	return 0;
}
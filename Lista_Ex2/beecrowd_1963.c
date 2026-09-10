#include <stdio.h>
 
int main() {
 
double A, B, V;

    scanf("%lf %lf", &A, &B);

    V = (100 * B / A - 100);       

    printf("%.2lf%%\n", V);   

    return 0;
    
}
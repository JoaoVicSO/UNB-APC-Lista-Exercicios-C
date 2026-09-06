#include <stdio.h>
    
int main() {
 
double N, X, Y, ICM;

    scanf("%lf %lf %lf", &N, &X, &Y);

    ICM = (N / (X + Y));

    printf("%.2lf\n", ICM);

    return 0;
}
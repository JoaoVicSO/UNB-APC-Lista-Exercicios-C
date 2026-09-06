#include <stdio.h>
 
int main() {
 
double N, X, Total;

    scanf("%lf %lf", &N, &X);

    Total = (X / (N + 2));

    printf("%.2lf\n", Total);

    return 0;
}
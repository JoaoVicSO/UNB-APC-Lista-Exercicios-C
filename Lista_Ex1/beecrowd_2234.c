#include <stdio.h>
 
int main() {

double M, H, P;    

    scanf("%lf %lf", &H, &P);

    M = (H / P);

    printf("%.2lf\n", M);

    return 0;
}
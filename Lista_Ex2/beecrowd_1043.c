#include <stdio.h>
 
int main() {
 
double A, B, C, R;

    scanf("%lf %lf %lf", &A, &B, &C);

    if(((A + B > C) && (B + C > A) && (A + C > B)) && (A > 0) && (B > 0) && (C > 0)) {
        R = (A + B + C);
        printf("Perimetro = %.1lf\n", R);

    } else {
        R = ((A + B) / 2 * C  );  
        printf("Area = %.1lf\n", R);

    }

    return 0;
}
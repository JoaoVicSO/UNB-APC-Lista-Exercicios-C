#include <stdio.h>
 
int main() {
 
    double A, B, C, trianR, trap, quad, circu, retan;
    const double pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    trianR = (A * C / 2);
    circu = ((C * C) * pi);
    trap = (((A + B) / 2) * C);
    quad = (B * B);
    retan = (A * B);


    printf("TRIANGULO: %.3lf\n", trianR);
    printf("CIRCULO: %.3lf\n", circu);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", retan);
    return 0;
}
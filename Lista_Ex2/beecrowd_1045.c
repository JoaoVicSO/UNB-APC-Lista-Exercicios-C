#include <stdio.h>
#include <math.h>

int main() {

    double A, B, C, X;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A < B) { 
        X = A; 
        A = B; 
        B = X; 

    }

    if (A < C) { 
        X = A; 
        A = C; 
        C = X; 

    }

    if (B < C) { 
        X = B; 
        B = C; 
        C = X; 

    }

    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");

    } else {

        // Classificação quanto aos ângulos
        if (pow(A, 2) == pow(B, 2) + pow(C, 2)) {
            printf("TRIANGULO RETANGULO\n");

        } else if (pow(A, 2) > pow(B, 2) + pow(C, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");

        } else if (pow(A, 2) < pow(B, 2) + pow(C, 2)) {
            printf("TRIANGULO ACUTANGULO\n");

        } 
        
        // Classificação quanto aos lados
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");

        } else if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
            printf("TRIANGULO ISOSCELES\n");

        }

    }
    
    return 0;
}
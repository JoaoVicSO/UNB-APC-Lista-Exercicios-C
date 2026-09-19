#include <stdio.h>
#include <math.h>

int ehTriangulo (double a, double b, double c) {

    if (a < b + c)
        return 1;

    else
        return 0;

}

int TrianguloRetangulo (double a, double b, double c) {

    if (pow(a, 2) == pow(b, 2) + pow(c, 2)) 
        return 1;

    else 
        return 0; 
     
}

int TrianguloObtusangulo (double a, double b, double c) {

    if (pow(a, 2) > pow(b, 2) + pow(c, 2)) 
        return 1;

    else 
        return 0; 
     
}

int TrianguloAcutangulo (double a, double b, double c) {

    if (pow(a, 2) < pow(b, 2) + pow(c, 2)) 
        return 1;

    else 
        return 0; 
     
}

int TrianguloEquilatero (double a, double b, double c) {
    if (a == b && b == c)
        return 1;
        
    else
        return 0;   

}

int TrianguloIsosceles (double a, double b, double c) {
    if ((a == b || b == c || a == c) && !(a == b && b == c))
        return 1;

    else 
        return 0; 
    
}

    
int main() {
    
double A, B, C, X;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A < B) {
        X = A; 
        A = B; 
        B = X;

    } if (A < C) {
        X = A; 
        A = C; 
        C = X;
        
    } if (B < C) { 
        X = B; 
        B = C; 
        C = X;

    } 

    if (ehTriangulo(A, B, C) == 1) {

        if (TrianguloRetangulo(A, B, C) == 1) 
            printf("TRIANGULO RETANGULO\n");
            
        else if (TrianguloObtusangulo(A, B, C) == 1)
            printf("TRIANGULO OBTUSANGULO\n");

        else if (TrianguloAcutangulo(A, B, C) == 1)
            printf("TRIANGULO ACUTANGULO\n");

        
        if (TrianguloEquilatero(A, B, C) == 1)
            printf("TRIANGULO EQUILATERO\n");

        else if (TrianguloIsosceles(A, B, C) == 1)
            printf("TRIANGULO ISOSCELES\n");
        
    } else 
        printf("NAO FORMA TRIANGULO\n");
 
    return 0;
}
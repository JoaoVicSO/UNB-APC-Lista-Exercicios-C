#include <stdio.h>
#include <math.h>

int ehTriangulo (double a, double b, double c) {
    
    if (a + b > c && a + c > b && b + c > a)
        return 1;
    
    else
        return 0;
    
}

int TrianguloRetangulo (double a, double b, double c) {

    if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2)) 
        return 1;

    else 
        return 0; 
     
}

int TrianguloObtusangulo (double a, double b, double c) {

    if (pow(a, 2) > pow(b, 2) + pow(c, 2) || pow(b, 2) > pow(a, 2) + pow(c, 2) || pow(c, 2) > pow(a, 2) + pow(b, 2)) 
        return 1;

    else 
        return 0; 
     
}

int TrianguloAcutangulo (double a, double b, double c) {

    if (pow(a, 2) < pow(b, 2) + pow(c, 2) || pow(b, 2) < pow(a, 2) + pow(c, 2) || pow(c, 2) < pow(a, 2) + pow(b, 2)) 
        return 1;

    else 
        return 0; 
     
}

int TrianguloEquilatero (double a, double b, double c) {

    if (pow(a, 2) == pow(b, 2) + pow (c, 2) || (pow(b, 2) == pow(a, 2) + pow (c, 2) || pow(c, 2) == pow(a, 2) + pow (b, 2)))
        return 1;
    
    else
        return 0;    

}

int TrianguloIsosceles (double a, double b, double c) {
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) 
        return 1;

    else 
        return 0; 
    
}

int Ordem (double a, double b, double c) {

double x, y, z;
    
    if (a < b) { 
        x = a; 
        a = b; 
        b = x; 

    }

    if (a < c) { 
        x = a; 
        a = c; 
        c = x; 

    }

    if (b < c) { 
        x = b; 
        b = c; 
        c = x; 

    }
    
}
    
int main() {
    
double A, B, C, X;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (ehTriangulo(A, B, C) == 1) {

        if (TrianguloRetangulo(A, B, C) == 1) 
            printf("TRIANGULO RETANGULO\n");
            
        if (TrianguloObtusangulo(A, B, C) == 1)
            printf("TRIANGULO OBTUSANGULO\n");

        if (TrianguloAcutangulo(A, B, C) == 1)
            printf("TRIANGULO ACUTANGULO\n");

        if (TrianguloEquilatero(A, B, C) == 1)
            printf("TRIANGULO EQUILATERO\n");

        if (TrianguloIsosceles(A, B, C) == 1)
            printf("TRIANGULO ISOSCELES\n");
        
    } else 
        printf("NAO FORMA TRIANGULO\n");
 
    return 0;
}

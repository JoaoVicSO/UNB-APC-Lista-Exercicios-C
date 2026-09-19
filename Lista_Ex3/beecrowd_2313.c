#include <stdio.h>
#include<math.h>

int ehTriangulo (int x, int y, int z) {
    
    if(x + y > z && x + z > y && y + z > x)
        return 1;
    
    else
        return 0;
    
}

void TipoTriangulo (int x, int y, int z) {
   
    if (x == y && y == z) 
        printf("Valido-Equilatero\n");

    else if(x == y || x == z || y == z)
        printf("Valido-Isoceles\n");

    else
        printf("Valido-Escaleno\n");
    
}

void CaracteristicaTriangulo (int x,int y, int z) {

    if (pow(x, 2) == pow(y, 2) + pow (z, 2) || (pow(y, 2) == pow(x, 2) + pow (z, 2) || pow(z, 2) == pow(x, 2) + pow (y, 2)))
        printf("Retangulo: S\n");

    else
        printf("Retangulo: N\n");                                         
    
}  

int main() {

int A,B,C; 

    scanf("%d %d %d", &A, &B, &C);

    if (ehTriangulo(A, B, C) == 1) {
        
        TipoTriangulo(A, B, C);
        CaracteristicaTriangulo(A, B, C);


    } else {
      
        printf("Invalido\n");

    }
    
}
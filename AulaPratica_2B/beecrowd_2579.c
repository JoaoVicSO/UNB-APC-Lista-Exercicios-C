#include <stdio.h>

int main() {

    int L, C, X, Y;
    
    scanf("%d %d %d %d", &L, &C, &X, &Y);

    if ((C % 2 == 0 && Y % 2 == 0) || (C % 2 != 0 && (X + Y) % 2 == 0))
        printf("Direita\n");
    else 
        printf("Esquerda\n");
    
    return 0;
    
}
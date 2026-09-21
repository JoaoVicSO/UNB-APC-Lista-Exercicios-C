#include <stdio.h>

int acharMenor(int a, int b, int c) {

    if (a <= b && a <= c) 
        return a;

    else if (b <= a && b <= c) 
        return b;

    else 
        return c;
    
}

// Função que compara 3 números e retorna o MAIOR
int acharMaior(int a, int b, int c) {

    if (a >= b && a >= c) 
        return a;

    else if (b >= a && b >= c) 

        return b;

    else 
        return c;
    
} 

// Função que descobre o número do MEIO
int acharMeio(int a, int b, int c) {

    int menor = acharMenor(a, b, c);
    int maior = acharMaior(a, b, c);


    return (a + b + c) - menor - maior;
}

int main() {

int A, B, C, menor, meio, maior;

    scanf("%d %d %d", &A, &B, &C);

    menor = acharMenor(A, B, C);
    meio = acharMeio(A, B, C);
    maior = acharMaior(A, B, C);

    printf("%d\n%d\n%d\n", menor, meio, maior);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;

}
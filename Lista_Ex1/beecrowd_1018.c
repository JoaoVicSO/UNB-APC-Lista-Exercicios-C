#include <stdio.h>
 
int main() {
 
int N;

    scanf("%d", &N);

    printf("%d\n", N);

    printf("%d nota(s) de R$ 100,00\n", N/100);
    N %= 100;

    printf("%d nota(s) de R$ 50,00\n", N/50);
    N %= 50;

    printf("%d nota(s) de R$ 20,00\n", N/20);
    N %= 20;

    printf("%d nota(s) de R$ 10,00\n", N/10);
    N %= 10;

    printf("%d nota(s) de R$ 5,00\n", N/5);
    N %= 5;
    
    printf("%d nota(s) de R$ 2,00\n", N/2);
    N %= 2;

    printf("%d nota(s) de R$ 1,00\n", N);
 
    return 0;
}

int teste() {
    int n, atual;
    scanf("%d", &n);
    
    printf("%d\n", n);
    atual = n;
    
    int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
    
    for (int i = 0; i < 7; i++) {
        int qtd = atual / cedulas[i];
        atual = atual % cedulas[i];
        printf("%d nota(s) de R$ %d,00\n", qtd, cedulas[i]);
    }
    
    return 0;

}
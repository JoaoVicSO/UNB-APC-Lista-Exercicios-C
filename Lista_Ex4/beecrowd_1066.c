#include <stdio.h>

int main() {

int i, pares = 0, impar = 0, positivo = 0, negativo = 0, n;

    for (i  = 0; i < 5; i ++) {

    scanf("%d", &n);

    if (n % 2 == 0)
        pares++;

    else 
        impar++;

    if (n > 0)
        positivo++;

    else if (n < 0)
        negativo++;

}
    
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
           
}
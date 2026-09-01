#include <stdio.h>
 
int main() {
    
    double valor, valorp1, valorp2;
    int peca1, peca2, qtdp1, qtdp2;


    scanf("%d %d %lf", &peca1, &qtdp1, &valorp1);
    scanf("%d %d %lf", &peca2, &qtdp2, &valorp2);

    valor = ((qtdp1 * valorp1 ) + (qtdp2 * valorp2 ));

    printf("VALOR A PAGAR: R$ %.2lf\n", valor);

 
    return 0;
}
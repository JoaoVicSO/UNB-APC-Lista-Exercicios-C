#include <stdio.h>

int main() {

int PV[500] = {0};
int i, J, R, pontos, maior, vencedor;

    scanf("%d %d", &J, &R);

    R *= J;

    for (i = 0; i < R; i++) {

        scanf("%d", &pontos);
        PV[i % J] += pontos;

    }

    vencedor = 0;

    maior = PV[0];

    for (i = 1; i < J; i++) {

        if (PV[i] >= maior) {

            vencedor = i;
            maior = PV[i];

        }

    }

    printf("%d\n", vencedor + 1);

    return 0;
    
}
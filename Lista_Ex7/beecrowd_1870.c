#include <stdio.h>
#include <stdlib.h>

int main() {

int l, c, p, i, j;
int VentEsq, VentDir, dif, PosiEsq, PosiDir, flag;

    while (1) {

        if (scanf("%d %d %d", &l, &c, &p) != 3) 
            break;
        
        // Caso todos sejam iguais a zero.
        if (!l && !c && !p) 
            break;

        int matriz[l][c];
        
        // Preencher matriz.
        for (i = 0; i < l; i++) {

            for (j = 0; j < c; j++) 
                scanf("%d", &matriz[i][j]);
            
        }

        flag = 0;

        for (i = 0; i < l; i++) {

            VentEsq = 0;
            VentDir = 0;
            PosiEsq = -1;
            PosiDir = c;

            // Encontra o ventilador mais próximo à esquerda do balão.
            for (j = p - 2; j >= 0; j--) {

                if (matriz[i][j] != 0) {

                    VentEsq = matriz[i][j];
                    PosiEsq = j;
                    break;

                }

            }

            // Encontra o ventilador mais próximo à direita do balão.
            for (j = p; j < c; j++) {

                if (matriz[i][j] != 0) {

                    VentDir = matriz[i][j];
                    PosiDir = j;
                    break;

                }

            }

            // Calcula a diferença
            dif = abs(VentDir - VentEsq);

            // Caso VentDir == VentEsq, não altera a posição do balão.
            if (VentDir > VentEsq) 
                p -= dif;

            else if (VentDir < VentEsq) 
                p += dif;

            // Caso o balão tenha chegado ou ultrapassado um dos ventiladores, será estourado.
            if (PosiEsq != -1 && (p - 1) <= PosiEsq) {

                printf("BOOM %d %d\n", i + 1, PosiEsq + 1);
                flag = 1;
                break;

            } else if (PosiDir != c && (p - 1) >= PosiDir) {

                printf("BOOM %d %d\n", i + 1, PosiDir + 1);
                flag = 1;
                break;

            }

        }

        // Caso o balão não tenha sido estourado, exibe a saída dele.
        if (!flag) 
            printf("OUT %d\n", p);
        
    }

    return 0;

}
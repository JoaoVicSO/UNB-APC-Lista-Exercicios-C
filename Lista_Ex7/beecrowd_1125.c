#include <stdio.h>

int main() {
    
int corridas[1000][1000];
int pontos[1000];
long long total[1000];
int i, j, k, n, G, P, S, K;

    while (scanf("%d %d", &G, &P) == 2) {

        if (G == 0 && P == 0) 
            break;
        
        for (i = 0; i < G; i++) {

            for (j = 0; j < P; j++) {

                scanf("%d", &corridas[i][j]);

            }
        }

        if (scanf("%d", &S) != 1) 
            break;
        

        for (n = 0; n < S; n++) {

            scanf("%d", &K);

            for (k = 0; k < K; k++) 
                scanf("%d", &pontos[k]);
            

            for (j = 0; j < P; j++) 
                total[j] = 0;
            

            for (i = 0; i < G; i++) {

                for (j = 0; j < P; j++) {

                    int posicao = corridas[i][j];

                    if (posicao >= 1 && posicao <= K) 
                        total[j] += pontos[posicao - 1];
                    
                }

            }

            long long total_pontos = total[0];

            for (j = 1; j < P; j++) {

                if (total[j] > total_pontos) 
                    total_pontos = total[j];
                
            }

            int primeiro = 1;

            for (j = 0; j < P; j++) {

                if (total[j] == total_pontos) {

                    if (!primeiro) 
                        printf(" ");
                    
                    printf("%d", j + 1);
                    primeiro = 0;

                }
            }

            printf("\n");

        }
    }

    return 0;
}
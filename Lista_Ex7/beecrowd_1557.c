#include <stdio.h>

int main() {

int n, i, j, maior, largura = 0;
int MatrizQ[15][15];

    while (scanf("%d", &n) == 1 && n != 0) {

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {

                if (i == 0 && j == 0)
                    MatrizQ[i][j] = 1;

                else if (i == 0)
                    MatrizQ[i][j] = MatrizQ[i][j - 1] * 2;

                else
                    MatrizQ[i][j] = MatrizQ[i - 1][j] * 2;
            }
        }

        maior = MatrizQ[n - 1][n - 1];

        while (maior > 0) {

            largura++;
            maior /= 10;

        }

        for (i = 0; i < n; i++) {

            for (j = 0; j < n; j++) {

                if (j == 0)
                    printf("%*d", largura, MatrizQ[i][j]);

                else
                    printf(" %*d", largura, MatrizQ[i][j]);
                    
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}

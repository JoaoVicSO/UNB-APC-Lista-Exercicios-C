#include <stdio.h>

int main() {

int i, j, l, c, m, n, maior, linha, coluna;

    scanf("%d %d %d %d", &l, &c, &m, &n);

    int matriz[l][c];

    for (i = 0; i < l; i++) {

        for (j = 0; j < c; j++) 
            scanf("%d", &matriz[i][j]);
        
    }

    maior = 0;

    for (i = 0; i < l; i += m) {

        for (j = 0; j < c; j += n) {

            int soma = 0;

            for (linha = i; linha < i + m; linha++) {

                for (coluna = j; coluna < j + n; coluna++) {

                    soma += matriz[linha][coluna];

                }

            }

            if (soma > maior) 
                maior = soma;
            
        }
    }

    printf("%d\n", maior);
    
    return 0;
}
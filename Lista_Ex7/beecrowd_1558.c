#include <stdio.h>

int dig(unsigned long long x) {

int d = 0;

    do {

        x = x / 10;
        d++;

    } while (x > 0);

    return d;

}

int main() {

int n, m, i, j, c, k;
unsigned long long mat[20][20], v;
int largura[20];

    scanf("%d", &n);

    for (c = 0; c < n; c++) {

        scanf("%d", &m);

        for (j = 0; j < m; j++)
            largura[j] = 1;

        for (i = 0; i < m; i++) {

            for (j = 0; j < m; j++) {

                scanf("%llu", &v);
                mat[i][j] = v * v;

                if (dig(mat[i][j]) > largura[j])
                    largura[j] = dig(mat[i][j]);

            }
        }

        if (c > 0)
            printf("\n");

        printf("Quadrado da matriz #%d:\n", c + 4);

        for (i = 0; i < m; i++) {

            for (j = 0; j < m; j++) {

                if (j > 0)
                    printf(" ");

                for (k = dig(mat[i][j]); k < largura[j]; k++)
                    printf(" ");

                printf("%llu", mat[i][j]);

            }

            printf("\n");

        }
    }

    return 0;
}
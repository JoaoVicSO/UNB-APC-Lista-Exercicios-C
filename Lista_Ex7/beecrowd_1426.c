#include <stdio.h>

void tijolos(int x[10][10], int r[10][10]) {

int i, j, a, b, v;

    for (i = 1; i <= 9; i++) {

        for (j = 1; j <= i; j++) {

            a = i / 2;
            b = (j + 1) / 2;

            if (i % 2 == 0 && j % 2 == 1)
                v = (x[a][b] + x[a + 1][b] - x[a + 1][b + 1]) / 2;

            else if (i % 2 == 0 && j % 2 == 0)
                v = (x[a][b] - x[a + 1][b] + x[a + 1][b + 1]) / 2;

            else if (i % 2 == 1 && j % 2 == 0)
                v = (x[a][b] - x[a + 1][b] - x[a + 1][b + 1]) / 2;

            else
                v = x[a + 1][b];

            r[i][j] = v;
        }
    }
}

int main() {

int i, j, t;

    scanf("%d", &t);

    while (t--) {

        int x[10][10] = {0};
        int r[10][10] = {0};

        for (i = 1; i <= 5; i++) {

            for (j = 1; j <= i; j++) {
                scanf("%d", &x[i][j]);
            }

        }

        tijolos(x, r);

        for (i = 1; i <= 9; i++) {
            for (j = 1; j <= i; j++) {

                if (j > 1) {
                    printf(" ");
                }
                printf("%d", r[i][j]);

            }

            printf("\n");
        }
    }

    return 0;
}
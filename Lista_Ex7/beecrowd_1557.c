#include <stdio.h>

int main() {

int n, i, j, a;
int matriz[100][100];

    while (1) {
        scanf("%d", &n);

        if (n == 0)
            break;

        a = 1;

        for (i = 0; i < n; i++) {

            for (j = 0; j < n; j++) {

                matriz[i][j] = a;
                a *= 2;
                
            }

            a = matriz[i][0] * 2;
        }

        int b = 0;
        int t = matriz[n - 1][n - 1];

        do {

            t = t / 10;
            b++;

        } while (t > 0);

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {

                int l = 0;
                int k = matriz[i][j];

                do {

                    k = k / 10;
                    l++;

                } while (k > 0);


                for (int m = l; m < b; m++) 
                    printf(" ");

                if (j == 0)
                    printf("%d", matriz[i][j]);

                else
                    printf(" %d", matriz[i][j]);

            }

            printf("\n");

        }

        printf("\n");
    }

    return 0;
}
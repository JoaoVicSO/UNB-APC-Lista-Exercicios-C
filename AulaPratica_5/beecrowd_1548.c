#include <stdio.h>

int main() {

    int i, n, m, nota, iguais, pos;
    int original[1000], ordenado[1000], contador[1001];

    scanf("%d", &n);

    while (n--) {

        scanf("%d", &m);

        for (i = 0; i <= 1000; i++)
            contador[i] = 0;

        for (i = 0; i < m; i++) {

            scanf("%d", &original[i]);
            
            contador[original[i]]++;

        }

        pos = 0;

        for (nota = 1000; nota >= 1; nota--)

            while (contador[nota]-- > 0)
                ordenado[pos++] = nota;

        iguais = 0;

        for (i = 0; i < m; i++)
            if (original[i] == ordenado[i]) iguais++;

        printf("%d\n", iguais);

    }

    return 0;

}
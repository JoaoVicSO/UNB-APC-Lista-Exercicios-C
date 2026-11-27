#include <stdio.h>

int main() {

int i, t, n, m, linha_i, coluna_i, valor_l, valor_c;

    scanf ("%d", &t);

    for (i = 0; i < t; i++) {

        scanf("%d %d", &n, &m);

        linha_i = n - 2;

        coluna_i = m - 2;

        if((coluna_i % 3) == 0)
            valor_c = coluna_i / 3;

        else if((coluna_i % 3) != 0)
            valor_c = (coluna_i / 3) + 1;

        if((linha_i % 3) == 0)
            valor_l = linha_i / 3;

        else if((linha_i % 3) != 0)
            valor_l = (linha_i / 3) + 1;

        printf("%d\n", (valor_l * valor_c));        

   }

    return 0;

}
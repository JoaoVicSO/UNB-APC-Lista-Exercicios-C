#include <stdio.h>

int CharNumero(char letra) {

int mai[26] = {6, 8, 7, 5, 2, 3, 0, 9, 1, 4, 6, 8, 7, 5, 2, 3, 0, 9, 1, 4, 6, 8, 7, 5, 2, 3};
int min[26] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5};

    if (letra >= 'A' && letra <= 'Z')
        return mai[letra - 'A'];

    if (letra >= 'a' && letra <= 'z')
        return min[letra - 'a'];

    return -1;

}

int main() {

char letra;
int i, n, cont_entrada, cont_saida, v;

    scanf("%d", &n);
    while (getchar() != '\n');   // consome o resto da linha, incluindo \r

    for (i = 0; i < n; i++) {

        cont_entrada = cont_saida = 0;

        while (scanf("%c", &letra) == 1 && letra != '\n') {

            if (letra == '\r')
                continue;

            cont_entrada++;

            if (cont_entrada <= 20 && letra != ' ' && cont_saida < 12) {

                v = CharNumero(letra);

                if (v >= 0) {

                    printf("%d", v);
                    cont_saida++;
                }
            }
        }

        printf("\n");

    }

    return 0;
    
}
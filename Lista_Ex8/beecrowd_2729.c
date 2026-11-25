
#include <stdio.h>
#include <string.h>

typedef struct {

    char nome[21];

} Alimento;

void Ordenar (Alimento v[], int n) {

int i, j;

    Alimento aux;

    for (i = 0; i < n - 1; i++) {

        for (j = i + 1; j < n; j++) {

            if (strcmp(v[i].nome, v[j].nome) > 0) {

                aux = v[i];
                v[i] = v[j];
                v[j] = aux;

            }

        }

    }

}

int main() {

int t, n, i, primeiro;

    scanf("%d", &t);

    while (t--) {

        Alimento alimento[1000];

        scanf("%d", &n);

        for (i = 0; i < n; i++) 
            scanf("%20s", alimento[i].nome);

        Ordenar(alimento, n);

        primeiro = 1;

        for (i = 0; i < n; i++) {

            if (i == 0 || strcmp(alimento[i].nome, alimento[i - 1].nome) != 0) {

                if (!primeiro)
                    printf(" ");

                printf("%s", alimento[i].nome);

                primeiro = 0;

            }

        }

        printf("\n");

    }

    return 0;

}

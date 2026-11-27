#include <stdio.h>
#include <string.h>

#define MAX_N 1000

typedef struct {

    char nome[21];

} Alimento;

void Ordenar(Alimento v[], int n) {

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
char c;

    Alimento alimento[MAX_N];

    if (scanf("%d", &t) != 1) 
        return 0;

    while (t--) {

        n = 0;

        do {

            scanf("%20s", alimento[n].nome);
            n++;
            c = getchar();

        } while (c != '\n' && n < MAX_N);

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
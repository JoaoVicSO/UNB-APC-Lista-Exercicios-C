#include <stdio.h>

typedef struct {

    char nome[32];
    int dias;

} Alimento;

void Validade(Alimento v[], int n) {

int i, j;

    Alimento aux;

    for (i = 0; i < n - 1; i++) {

        for (j = i + 1; j < n; j++) {

            if (v[i].dias > v[j].dias) {
                
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;

            }

        }

    }

}

int main() {

int i, n;

    while (scanf("%d", &n) != EOF) {

        Alimento alimento[1000];

        for (i = 0; i < n; i++) 
            scanf("%s %d", alimento[i].nome, &alimento[i].dias);
        
        Validade(alimento, n);

        for (i = 0; i < n; i++) {

            if (i > 0) 
                printf(" ");
            
            printf("%s", alimento[i].nome);

        }

        printf("\n");

    }

    return 0;

}
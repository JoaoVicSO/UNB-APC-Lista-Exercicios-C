#include <stdio.h>
#include <string.h>

struct alimento {

    char nome[101];
    int vitamina;

};

typedef struct alimento Alimento;

Alimento tabela[7] = {

    "suco de laranja", 120,
    "morango fresco", 85,
    "mamao", 85,
    "goiaba vermelha", 70,
    "manga", 56,
    "laranja", 50,
    "brocolis", 34

};

int Vitamina(char nome[]) {

int j;

    for (j = 0; j < 7; j++) {

        if (strcmp(nome, tabela[j].nome) == 0) 
            return tabela[j].vitamina;
        
    }

    return 0;

}

int main() {

int i, t, n, total;
char nome[101];

    while (scanf("%d", &t) && t != 0) {

        total = 0;

        for (i = 0; i < t; i++) {

            scanf("%d %[^\r\n]", &n, nome);
            total += n * Vitamina(nome);

        }

        if (total > 130) 
            printf("Menos %d mg\n", total - 130);

        else if (total < 110) 
            printf("Mais %d mg\n", 110 - total);

        else 
            printf("%d mg\n", total);

    }

    return 0;
}
#include <stdio.h>
#include <string.h>

struct elfo {

    char nome[101];
    char grupo[101];
    int horas;

};

typedef struct elfo Elfo;

int main() {

int i, n, total;
int bonecos = 0, arquitetos = 0, musicos = 0, desenhistas = 0;

    Elfo elfos[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%s", elfos[i].nome);
        scanf("%s", elfos[i].grupo);
        scanf("%d", &elfos[i].horas);

        if (strcmp(elfos[i].grupo, "bonecos") == 0) 
            bonecos += elfos[i].horas;

        else if (strcmp(elfos[i].grupo, "arquitetos") == 0) 
            arquitetos += elfos[i].horas;

        else if (strcmp(elfos[i].grupo, "musicos") == 0) 
            musicos += elfos[i].horas;

        else if (strcmp(elfos[i].grupo, "desenhistas") == 0) 
            desenhistas += elfos[i].horas;
        
    }

    total = bonecos / 8 + arquitetos / 4 + musicos / 6 + desenhistas / 12;

    printf("%d\n", total);

    return 0;
}
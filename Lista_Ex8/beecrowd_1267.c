#include <stdio.h>

struct aluno {

    int id;
    int presencas;

};

typedef struct aluno Aluno;

int Jantar(Aluno v[], int n, int d) {

int i;

    for (i = 0; i < n; i++) 
        if (v[i].presencas == d) return 1;

    return 0;
}

int main() {

int n, d, i, j, x;

    Aluno alunos[100];

    while (scanf("%d %d", &n, &d) && (n != 0 || d != 0)) {

        for (i = 0; i < n; i++) {

            alunos[i].id = i + 1;
            alunos[i].presencas = 0;

        }

        for (i = 0; i < d; i++) {

            for (j = 0; j < n; j++) {
                
                scanf("%d", &x);
                alunos[j].presencas += x;

            }

        }

        if (Jantar(alunos, n, d)) 
            printf("yes\n");

        else 
            printf("no\n");
            
    }

    return 0;
}
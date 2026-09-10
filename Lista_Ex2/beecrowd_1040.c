#include <stdio.h>
 
int main() {
 
double N1, N2, N3, N4, N5, MF, MN;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    MF = (((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10);

    if (MF >= 7.0) {
        printf("Media: %.1lf\n", MF);
        printf("Aluno aprovado.\n");

    } else if (MF >= 5 && MF <= 6.9) {
        scanf("%lf", &N5);

        MN = ((MF + N5) / 2 );

        printf("Media: %.1lf\n", MF);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", N5);
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n", MN);


    } else {
        printf("Media: %.1lf\n", MF);
        printf("Aluno reprovado.\n");

    }

    return 0;
}
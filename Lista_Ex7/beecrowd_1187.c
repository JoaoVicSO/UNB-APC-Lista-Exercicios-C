#include <stdio.h>

int main() {

double soma = 0.0, mat[12][12];
int i, j, c = 0;
char op;

    scanf("%c", &op);

    for (i = 0; i < 12; i++) {

        for (j = 0; j < 12; j++) 
            scanf("%lf", &mat[i][j]);
        
    }

    for (i = 0; i < 5; i++) {

        for (j = i + 1; j < 11 - i; j++) {
            soma += mat[i][j];
            c++;

        }
        
    }

    if (op == 'S') 
        printf("%.1lf\n", soma);

    else 
        printf("%.1lf\n", soma / c);
    
    return 0;

}
#include <stdio.h>
 
int main() {
 
double n, i, media = 0, soma = 0;
int positivo = 0;
    
    for (i = 0; i < 6; i++) {
        scanf ("%lf", &n);

        if  (n > 0) {
            positivo++;
            soma += n;
            
        }
    }

    media = soma / positivo;
    
    printf("%d valores positivos\n", positivo);
    printf("%.1f\n", media);
    
    return 0;
}
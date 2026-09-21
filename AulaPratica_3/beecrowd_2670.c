#include <stdio.h>

int calcularMenorTempo (int A1, int A2, int A3) {

int tempoPrimeiroAndar, tempoSegundoAndar, tempoTerceiroAndar, menorTempo; 

    tempoPrimeiroAndar = (2 * A2 + 4 * A3);
    tempoSegundoAndar = (2 * (A1 + A3));
    tempoTerceiroAndar = (4 * A1 + 2 * A2);

    menorTempo = tempoPrimeiroAndar;

    if (tempoSegundoAndar < menorTempo)
        menorTempo = tempoSegundoAndar;

    if (tempoTerceiroAndar < menorTempo)
        menorTempo = tempoTerceiroAndar;

    return menorTempo;

}

int main() {

int A1, A2, A3, menorTempo;

    scanf("%d %d %d", &A1, &A2, &A3);

    menorTempo = calcularMenorTempo(A1, A2, A3);

    printf("%d\n", menorTempo);

    return 0;
    
}
#include <stdio.h>
#include <stdlib.h> // Necessário para a função abs()

int main() {

    int A, B, C, MenorAB, TotalB;

    scanf("%d %d %d", &A, &B, &C);

    // Calcula o menor entre Farinha e Ovos
    MenorAB = ((A / 2) + (B / 3) - abs((A / 2) - (B / 3))) / 2;

    // Compara o MenorAB com o Leite (C / 5) e enviar para TotalB
    TotalB = (MenorAB + (C / 5) - abs(MenorAB - (C / 5))) / 2;

    printf("%d\n", TotalB);

    return 0;
}


/*


#include <stdio.h>
#include <stdlib.h>

int main() {

int A, B, C, F, O, L;

    scanf("%d %d %d", &A, &B, &C);

    // Divisão inteira de cada ingrediente pela receita
    F = A / 2;
    O = B / 3;
    L = C / 5;

    // Menor entre farinha(A) e ovos(B)
    MenorAB = (F + O - abs(F - O)) / 2;

    // Menor entre o resultado anterior e o leite(C)
    TotalB = (MenorAB + L - abs(MenorAB - L)) / 2;

    printf("%d\n", TotalB);

    return 0;
}

*/
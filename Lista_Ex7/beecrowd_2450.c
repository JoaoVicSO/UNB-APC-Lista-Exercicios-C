#include <stdio.h>

int main() {

int i, j, linhas, colunas;

    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];
    int inicio[linhas];


    for (i = 0; i < linhas; i++) {
        inicio[i] = 0;

        for (j = 0; j < colunas; j++) 
            scanf("%d", &matriz[i][j]);
        
        while (inicio[i] < colunas && matriz[i][inicio[i]] == 0) 
            inicio[i]++;
        
    }

    int ehEscada = 1;

    for (i = 1; i < linhas && ehEscada; i++) {

        int anterior = inicio[i - 1];
        int atual    = inicio[i];

    if (atual <= anterior && !(atual == anterior && atual == colunas)) 
        ehEscada = 0;
        
    }

    if (ehEscada && inicio[linhas - 1] > 0) 
        printf("S\n");

    else 
        printf("N\n");
    
    return 0;
    
}
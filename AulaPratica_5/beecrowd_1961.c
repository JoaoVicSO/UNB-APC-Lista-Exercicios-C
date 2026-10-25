#include <stdio.h>
#include <stdlib.h> 

int main() {

int P, N, i, D = 0, diferenca;

    if (scanf("%d %d", &P, &N) != 2) 
        return 0;

    int canos[N];    

    for (i = 0; i < N; i++) {
        scanf("%d", &canos[i]);

        if (i > 0) {

            diferenca = abs(canos[i] - canos[i-1]);

            if (diferenca > P) 
                D++;
            
        }

    }

    if (D != 0)
        printf("GAME OVER\n");

    else
        printf("YOU WIN\n");

    return 0;
    
}
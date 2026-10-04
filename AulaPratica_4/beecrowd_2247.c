#include <stdio.h>

int main() {

int N, J, Z, i, teste = 1, diferenca;
    
    while (scanf("%d", &N) && N != 0) {

        printf("Teste %d\n", teste++);
        
        diferenca = 0;
        for (i = 0; i < N; i++) {

            scanf("%d %d", &J, &Z);
            diferenca += (J - Z);
            printf("%d\n", diferenca);

        }

        printf("\n"); 

    }
    
    return 0;
}

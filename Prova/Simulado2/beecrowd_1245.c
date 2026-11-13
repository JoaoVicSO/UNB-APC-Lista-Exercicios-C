#include <stdio.h>

int main() {

char L;
int sapatos[61], i, N, M, pares;

    while (scanf("%d", &N) != EOF) {

        pares = 0;

        for (i = 0; i < 61; i++)
            sapatos[i] = 0;
        

        for (i = 0; i < N; i++) {

            scanf("%d %c", &M, &L);

            if (L == 'D') {
                
                if (sapatos[M] < 0)    
                    ++pares;
                
                ++sapatos[M];

            } else {
                
                if (sapatos[M] > 0)
                    ++pares;
                
                --sapatos[M];

            }

        }

        printf("%d\n", pares);

    }

    return 0;
}
#include <stdio.h>
 
int main() {
 
int B, P, N;

    scanf ("%d", &N);

    P = (N * N / 2);

    if (N % 2 == 0)
        B = P;
    
    else
        B = (P + 1);

    printf ("%d casas brancas e %d casas pretas\n", B, P);

    return 0;
}
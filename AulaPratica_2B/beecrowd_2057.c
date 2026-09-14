#include <stdio.h>
 
int main() {
 
int S, T, F, P;

    scanf("%d %d %d", &S, &T, &F);

    P = ((24 + S + T + F) % 24);

    printf("%d\n", P);
 
    return 0;
}
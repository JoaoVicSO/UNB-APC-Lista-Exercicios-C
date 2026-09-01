#include <stdio.h>
#include <stdlib.h>
 
int main() {

    int maiorAB, A, B, C;

    scanf("%d %d %d", &A, &B, C);

    maiorAB = (((A + B + C) * (A - B -)) / 2 );


    printf("%d eh o maior\n", maiorAB);

    return 0;
}
#include <stdio.h>
 
int main() {

int N1, D1, V1, N2, D2, V2;

    scanf("%d %d %d", &N1, &D1, &V1);
    scanf("%d %d %d", &N2, &D2, &V2);

    if (D1 * V2 < D2 * V1)
        printf("%d\n", N1);

    else 
        printf("%d\n", N2);
        
    return 0;
}
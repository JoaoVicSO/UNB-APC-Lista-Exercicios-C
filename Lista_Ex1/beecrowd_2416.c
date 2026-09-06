#include <stdio.h>
 
int main() {

int T, C, N;    

    scanf("%d %d", &C, &N);

    T = (C % N);

    printf("%d\n", T);

    return 0;
}
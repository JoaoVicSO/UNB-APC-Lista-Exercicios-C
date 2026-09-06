#include <stdio.h>
 
int main() {
 
int T1, T2, T3, T4, Tmax;

    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);

    Tmax = ((T1 + T2 + T3 + T4) - 3);

    printf("%d\n", Tmax);


    return 0;
}
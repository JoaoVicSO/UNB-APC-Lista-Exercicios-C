#include <stdio.h>
 
int Top(int a) {

    if (a <= 100)
        return 100;
    
    else if (a <= 50)
        return 50;
    
    else if (a <= 25)
        return 25;

    else if (a >= 10)
        return 10;

    else if (a <= 5)
        return 5;

    else if (a <= 3 && a != 1)
        return 3;

    else if (a == 1)
        return 1;
    
    }

int main() {
 
int K;

    scanf("%d", &K);

    if (Top(K) == 100)
        printf("TOP 100\n");
    
    else if (Top(K) == 50)
        printf("TOP 50\n");

    else if (Top(K) == 25)
        printf("TOP 25\n");
    
    else if (Top(K) == 10)
        printf("TOP 10\n");

    else if (Top(K) == 5)
        printf("TOP 5\n");

    else if (Top(K) == 3)
        printf("TOP 3\n");

    else if (Top(K) == 1)
        printf("TOP 1");

    return 0;
}
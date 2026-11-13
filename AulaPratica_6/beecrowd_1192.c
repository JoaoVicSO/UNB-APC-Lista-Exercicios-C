#include <stdio.h>

int main() {

int n, x, z;
char y, s[10];

    scanf("%d", &n);

    while (n--) {

        scanf("%s", s);

        x = s[0] - 48;   
        y = s[1];        
        z = s[2] - 48;   

        if (x == z)
            printf("%d\n", x * z);

        else if (y >= 65 && y <= 90)   
            printf("%d\n", z - x);

        else
            printf("%d\n", x + z);

    }

    return 0;
}
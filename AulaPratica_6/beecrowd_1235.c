#include <string.h>
#include <stdio.h>

int main() {

int N, n, i, j, meio;
char frase[101];

    scanf("%d\n", &N);

    for(i = 0; i < N; ++i) {

        scanf("%[^\n]\n", frase);

        n = strlen(frase);
        meio = n / 2;
        
        for(j = n - 1; j >= meio; --j) 
            putchar(frase[j]);
        
        for(j = meio - 1; j >= 0; --j) 
            putchar(frase[j]);

        putchar('\n');

    }

    return 0;
}
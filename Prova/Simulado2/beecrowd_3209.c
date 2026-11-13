#include <stdio.h>

int main() {

int i, n, k, soma = 0, tomadas[k];   

    if (scanf("%d", &n) != 1) 
    return 0;

    while (n--) {

        scanf("%d", &k);

        for (i = 0; i < k; i++) 
            scanf("%d", &tomadas[i]);
        

        for (i = 0; i < k; i++) 
            soma += tomadas[i];
        
        printf("%d\n", soma - (k - 1));

    }

    return 0;

}
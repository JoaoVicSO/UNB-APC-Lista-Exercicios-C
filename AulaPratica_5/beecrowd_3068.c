#include <stdio.h>

int main() {
    
int x1, y1, x2, y2, n, m1, m2, testes = 1, meteoritos;

    while (1) {

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) 
            break;

        meteoritos = 0;

        scanf("%d", &n);

        for (int i = 0; i < n; i++) {

            scanf("%d %d", &m1, &m2);

            if (m1 >= x1 && m1 <= x2 && m2 <= y1 && m2 >= y2) 
                meteoritos++;
            
        }

        printf("Teste %d\n", testes);

        printf("%d\n", meteoritos);

        testes++;

    }

    return 0;

}
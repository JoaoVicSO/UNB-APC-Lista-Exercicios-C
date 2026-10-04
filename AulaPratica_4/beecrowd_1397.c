#include <stdio.h>

int main() {

int N, A, B, P1, P2, i;
    
    while (scanf("%d", &N) && N != 0) {

        P1 = 0;
        P2 = 0;
        
        for (i = 0; i < N; ++i) {

            scanf("%d %d", &A, &B);

            if (A > B) 
                ++P1;

            else if (B > A) 
                ++P2;
            
        }

        printf("%d %d\n", P1, P2);

    }  

    return 0;

}



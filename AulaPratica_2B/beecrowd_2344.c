#include <stdio.h>
    
int main() {
    
int N;
char M;

        scanf("%d", &N);

        if (N > 85) {
            M = 'A';

        } else if (N > 61) {
            M = 'B';

        } else if (N > 36) {
            M = 'C';

        } else if (N > 1) {
            M = 'D';    

        } else {
            M = 'E';    

        }   
        
        printf("%c\n", M);

        return 0;
        
    }
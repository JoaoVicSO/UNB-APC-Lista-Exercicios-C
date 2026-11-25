#include <stdio.h>

int main() {

int n, maior;
    
    do {   

        scanf ("%d", &n);
        
        maior = n;
        
        while (n > 1) {

            if (n % 2)
                n = 3 * n + 1;

            else 
                n /= 2;
            
            if (n > maior)
                maior = n;
            
        }
        
        if (n != 0)
            printf("%d\n", maior);      
        
    } while (n != 0);

    return 0;
    
}
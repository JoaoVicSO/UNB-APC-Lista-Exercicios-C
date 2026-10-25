#include <stdio.h>

int main() {

int X[5], Y[5], i, c = 1;

    for (i = 0; i < 5; i++)
        scanf ("%d", &X[i]);

    
    for (i = 0; i < 5; i++) {
        scanf ("%d", &Y[i]);
        
         if (X[i] == Y[i])
             c = 0;
        
    }

    if (c == 1) 
        printf ("Y\n");

    else 
        printf("N\n");
    
}
#include <stdio.h>
 
int main() {
 
int N, P, Q, R, ans;
char OP;

    scanf("%d", &N);
    scanf("%d %c %d", &P, &OP, &Q);

    switch (OP) {
    case '+':

        R = (P + Q);

        break;
    
    case '*':

        R = (P * Q);

        break;
    
    default:
        break;
    }

    if (R > N) {
        printf ("OVERFLOW\n");

    } else {
        printf ("OK\n");

    }    
 
    return 0;
}
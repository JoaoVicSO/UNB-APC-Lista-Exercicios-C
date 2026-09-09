#include <stdio.h>
 
int main() {
 
int B, G;

    scanf("%d %d", &B, &G);

    if(G / 2 <= B) {
        printf("Amelia tem todas bolinhas!\n");

    }

    else{
        printf("Faltam %d bolinha(s)\n", G/2 - B);
    
    }
 
    return 0;
}
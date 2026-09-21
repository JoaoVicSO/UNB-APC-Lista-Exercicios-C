#include <stdio.h>
 
// 1 -> Empate (*)
// 2 -> Vitória de Alice
// 0 -> Posição inválida (?)

int JogoDaVelha(char a, char b, char c) {

    if (a == 'X' && b == 'O' && c == 'X') 
        return 1;

    else if (a == 'X' && b == 'X' && c == 'O') 
        return 2;
    
    else if (a == 'O' && b == 'X' && c == 'X') 
        return 2;
    
    else 
        return 0;

}

int main() {
 
char A, B, C;
int resultado;

    scanf("%c %c %c", &A, &B, &C);

    resultado = JogoDaVelha(A, B, C);

    if (resultado == 1) 
        printf("*\n");
    
    else if (resultado == 2) 
        printf("Alice\n");
    
    else 
        printf("?\n");
    
}
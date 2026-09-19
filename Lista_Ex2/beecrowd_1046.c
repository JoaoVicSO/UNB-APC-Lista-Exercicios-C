#include <stdio.h>
 
int main() {
 
int Inicio, Fim, Duracao;

    scanf("%d %d", &Inicio, &Fim);

    if (Inicio < Fim)
        Duracao = (Fim - Inicio);
        
    else
        Duracao = (24 - Inicio + Fim);

    printf("O JOGO DUROU %d HORA(S)\n", Duracao);

 
    return 0;
}
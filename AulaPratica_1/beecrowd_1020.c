#include <stdio.h>
 
int main() {
 
    int idade, ano, dia, mes, r;
    
    // Entrada
    scanf("%d", &idade);


    // Processamento
      ano = (idade / 365);
      r = (idade % 365);
      mes = (r / 30);
      dia = (r % 30);

    // Saida
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano,mes,dia);


    return 0;
}
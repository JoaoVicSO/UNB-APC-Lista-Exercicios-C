#include <stdio.h>
 
int main() {
 
    int n, h, m, s, r;
    
    // Entrada
    scanf("%d", &n);


    // Processamento
      h = (n / 3600);
      r = (n % 3600);
      m = (r / 60);
      s = (r % 60);

    // Saida
    printf("%d:%d:%d\n", h,m,s);


    return 0;
}
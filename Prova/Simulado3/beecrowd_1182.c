#include <stdio.h>
 
int main() {
 
double soma = 0.0, mat[12][12];
int i, j, coluna;
char op;

  scanf("%d", &coluna);
  getchar();
  op = getchar();
  
  for (i = 0; i < 12; i++) {
  
    for (j = 0; j < 12; j++)
      scanf ("%lf", &mat[i][j]);
    
    }
    
  for (j = 0; j < 12; j++) 
    soma += mat[j][coluna];
  
  if (op == 'S')
    printf("%.1lf\n", soma);
    
  else
    printf("%.1lf\n", soma/12.0);
  
    return 0;
    
}
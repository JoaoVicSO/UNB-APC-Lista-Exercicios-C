#include <stdio.h>
 
int main() {

int horas, velmedia, distancia;
double litros;

    scanf("%d %d",&horas, &velmedia);    

   distancia = (horas * velmedia);
    litros = (distancia / 12.0);

    printf("%.3lf\n", litros);

    return 0;
}
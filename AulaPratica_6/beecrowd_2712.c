#include <stdio.h>
#include <string.h>

int main() {
    
int n, i, j, valida, d;
char placa[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%s", placa);

        valida = 1;

        if (strlen(placa) != 8) 
            valida = 0;

        else {
            for (j = 0; j < 3; j++) {
                if (placa[j] < 'A' || placa[j] > 'Z') 
                valida = 0;
            }
            
            if (placa[3] != '-') 
            valida = 0;

            for (j = 4; j < 8; j++) {
                if (placa[j] < '0' || placa[j] > '9') 
                valida = 0;

            }

        }

        if (!valida) 
            printf("FAILURE\n");

        else {
            d = placa[7] - '0';

            if (d == 1 || d == 2) 
                printf("MONDAY\n");

             else if (d == 3 || d == 4) 
                printf("TUESDAY\n");

             else if (d == 5 || d == 6) 
                printf("WEDNESDAY\n");

             else if (d == 7 || d == 8) 
                printf("THURSDAY\n");

             else 
                printf("FRIDAY\n");
            
        }

    }

    return 0;
}
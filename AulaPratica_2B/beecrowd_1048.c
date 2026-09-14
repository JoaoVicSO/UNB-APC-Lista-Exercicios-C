    #include <stdio.h>
    
    int main() {
    
    double salario, Nsalario, reajuste;
    int percentual;

        scanf("%lf", &salario);

        if (salario > 2000.00) {
            percentual = 4;
            reajuste = (salario * 0.04);

        } else if (salario > 1200.00) {
            percentual = 7;
            reajuste = (salario * 0.07);

        } else if (salario > 800.00) {
            percentual = 10;
            reajuste = (salario * 0.10);

        } else if (salario > 400.00) {
            percentual = 12;
            reajuste = (salario * 0.12);

        } else {
            percentual = 15;
            reajuste = (salario * 0.15);

        }   
        
            Nsalario = (reajuste + salario);

            printf("Novo salario: %.2lf\n", Nsalario);
            printf("Reajuste ganho: %.2lf\n", reajuste);
            printf("Em percentual: %d %%\n", percentual);

        return 0;
        
    }
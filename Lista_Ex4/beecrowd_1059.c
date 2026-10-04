#include <stdio.h>

void ImprimePar(int par) {

    for(par = 2; par <= 100; par += 2) 
        printf("%d\n", par);

}

int main() {

int par = 0;

    ImprimePar(par);

    return 0;

/*

int par;

    for(par = 2; par <= 100; par += 2) 
        printf ("%d\n", par) ;

    return 0;


    Usando While 
    
    while (par <= 100) {
        printf("%d\n", par);
        par += 2;
    }

*/

}
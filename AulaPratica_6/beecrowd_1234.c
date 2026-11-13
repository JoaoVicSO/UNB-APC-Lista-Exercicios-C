#include <stdio.h>
#include <string.h>

int main() {

    char s[1005];
    int tam, maiuscula;

    while (scanf("%[^\n]%*c", s) == 1) {

        tam = strlen(s);
        maiuscula = 1;

        for (int i = 0; i < tam; i++) {

            if (s[i] >= 'a' && s[i] <= 'z') {

                if (maiuscula) 
                    s[i] = s[i] - 'a' + 'A';
                
                maiuscula = !maiuscula;

            } else if (s[i] >= 'A' && s[i] <= 'Z') {

                if (!maiuscula) 
                    s[i] = s[i] - 'A' + 'a';
                
                maiuscula = !maiuscula;

            }

        }

        printf("%s\n", s);
    }

    return 0;
    
}
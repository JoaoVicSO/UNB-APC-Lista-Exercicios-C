#include <stdio.h>
#include <string.h>

int main() {

char s[1100], r[1100];
int i, j, n;

    scanf("%[^\n]", s);
    n = strlen(s);

    while (n > 0 && s[n - 1] == '\r') 
        s[--n] = '\0';

    for (i = 0, j = 0; i < n; i++) {

        if (s[i] == ' ') 
            r[j++] = ' ';

        else {

            r[j++] = s[i + 1];   
            i++;         

        }

    }

    r[j] = '\0';

    printf("%s\n", r);

    return 0;

}
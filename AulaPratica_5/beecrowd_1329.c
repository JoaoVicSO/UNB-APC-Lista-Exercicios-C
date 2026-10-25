#include <stdio.h>
 
int main() {
 
int n, i, m, j, v[10000];
    
        while (scanf("%d", &n)) {
            if (n == 0)
                break;
        
        m = j = 0;
            
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);

    if (v[i] == 0) 
        m++;

    else if (v[i] == 1) 
        j++;
        
    }
    
    printf ("Mary won %d times and John won %d times\n", m, j);

    }

}
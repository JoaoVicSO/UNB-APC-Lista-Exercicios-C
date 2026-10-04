#include <stdio.h>

int ConverterMinuto(int H, int M) {
    
    return 60 * H + M;

}

int main() {

int H1, M1, H2, M2, I, F, R;

    while (scanf("%d %d %d %d", &H1, &M1, &H2, &M2)) {

        if (!H1 && !M1 && !H2 && !M2)    
            break;

        I = ConverterMinuto(H1, M1);
        F = ConverterMinuto(H2, M2);

        R = F - I;
        
        if (R <= 0) 
            R += 1440;
        
        printf("%d\n", R);

    }

    return 0;
}
#include <stdio.h>

int LuaNova (int a, int b) {
    if (b >= 0 && b <= 2)
        return 1;

    else
        return 0;

}

int LuaCheia (int a, int b) {
    if (b >= 97 && b <= 100)
        return 1;

    else
        return 0;

}

int LuaCrescente (int a, int b) {
    if (b >= 3 && b <= 96 && b >= a)
        return 1;

    else
        return 0;
        
}

int LuaMinguante (int a, int b) {
    if (b >= 3 && b <= 96 && b < a)
        return 1; 

    else
        return 0;

}

int main() {

int A, B;

    scanf("%d %d", &A, &B);

    if (LuaNova(A, B) == 1) 
        printf("nova\n");

    else if (LuaCheia(A, B) == 1)
        printf("cheia\n");

    else if (LuaCrescente(A, B) == 1)
        printf("crescente\n");

    else if (LuaMinguante(A, B) == 1)
        printf("minguante\n");

    return 0;

}
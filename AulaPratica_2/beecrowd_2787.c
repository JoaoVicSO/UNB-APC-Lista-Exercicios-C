#include <stdio.h>
#include <math.h>
 
int main() {
 
int L, C, R;

    scanf("%d", &L);
    scanf("%d", &C);

    R = (1 - ((L % 2 ) ^ (C % 2)));

    printf("%d\n", R);
    
 
    return 0;
}

/*
    if(L % 2 != 0){
        if(C % 2 != 0){
            printf("1\n");
        } else {
            printf("0\n");
        } 
    } else {
        if(C % 2 != 0){
            printf("0\n");
        } else {
            printf("1\n");
        } 
    } 

*/
#include<stdio.h>
#include<string.h>

int main(){
    char str1[10001], str2[10001];
    int diff;

    scanf("%[^\n]",str1);
    getchar();
    scanf("%[^\n]",str2);

    diff = strcmp(str1,str2);

    if(diff > 0){
        printf("%s eh maior do que %s\n",str1,str2);
    }
    else{
        if(diff < 0){
            printf("%s eh menor do que %s\n",str1,str2);
        }
        else{
            printf("%s eh igual a %s\n",str1,str2);
        }
    }

    return 0;
}
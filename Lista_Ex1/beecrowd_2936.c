#include <stdio.h>
 
int main() {

int Curu, Boi, Boto, Mapi, Lara, Total;

    scanf("%d %d %d %d %d", &Curu, &Boi, &Boto, &Mapi, &Lara);

    Curu = (Curu * 300);
    Boi = (Boi * 1500);
    Boto = (Boto * 600);
    Mapi = (Mapi * 1000);
    Lara = (Lara * 150);

    Total = ((Curu + Boi + Boto + Mapi + Lara ) + 225);

    printf("%d\n", Total);
 
    return 0;
}
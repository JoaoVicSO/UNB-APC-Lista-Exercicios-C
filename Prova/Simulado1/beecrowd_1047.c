#include <stdio.h>

int converter_para_minutos(int H, int M) {
    return (H * 60 + M);

}

int main() {
 
int h, m, hi, mi, hf, mf, totalI, totalF, duracao;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    totalI = converter_para_minutos(hi, mi);
    totalF = converter_para_minutos(hf, mf);

    if (totalF <= totalI) 
        totalF += 24 * 60;

    duracao = totalF - totalI;

    h = duracao / 60;
    m = duracao % 60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
}
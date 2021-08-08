#include <stdio.h>
#include <math.h>

int main(){

    int input, pnum, snum, tnum, qnum, saida;

    scanf("%d",&input);
    pnum = (input - (input % 100))/100;
    snum = ((input % 100) - ((input % 100) % 10))/10;
    tnum = (input % 100) % 10;
    qnum = (pnum + (snum*3) + (tnum*5))%7;
    saida = (pnum*1000) + (snum*100) + (tnum*10) + qnum;
    printf("O NOVO NUMERO E = %d\n",saida);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){

    int input, pnum, snum, tnum, saida;

    scanf("%d",&input);
    pnum = (input - (input % 100))/100;
    snum = ((input % 100) - ((input % 100) % 10))/10;
    tnum = (input % 100) % 10;
    saida = (tnum*100) + (snum*10) + (pnum*1);
    printf("%d\n",saida);

    return 0;
}
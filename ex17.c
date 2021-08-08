#include <stdio.h>

int dinheiro, notacem, notacinq, notadez, moedaum, qtdnotas, resto;

int main (){
    scanf("%d", &dinheiro);
    contagemnota(100);
    notacem = qtdnotas;
    contagemnota(50);
    notacinq = qtdnotas;
    contagemnota(10);
    notadez = qtdnotas;
    contagemnota(1);
    moedaum = qtdnotas;

    printf("NOTAS DE 100 = %d\n", notacem);
    printf("NOTAS DE 50 = %d\n", notacinq);
    printf("NOTAS DE 10 = %d\n", notadez);
    printf("MOEDAS DE 1 = %d\n", moedaum);

    return 0;
}

void contagemnota(int k){
    qtdnotas = dinheiro / k;
    resto = dinheiro % k;
    dinheiro = resto;
}
#include <stdio.h>
#include <math.h>

int main(){
    double maviao, aaviao, tdecolagem, velocidadekm, deslocamento, trabalho, velocidadems;

    scanf("%lf%*c", &maviao);
    scanf("%lf%*c", &aaviao);
    scanf("%lf%*c", &tdecolagem);

    maviao = 1000 * maviao;
    velocidadems = aaviao * tdecolagem;
    velocidadekm = velocidadems * 3.6;
    deslocamento = (pow(tdecolagem,2)*aaviao)/2.0;
    trabalho = (maviao*(pow(velocidadems,2.0)))/2.0;

    printf("VELOCIDADE = %.2lf\n", velocidadekm);
    printf("ESPACO PERCORRIDO = %.2lf\n", deslocamento);
    printf("TRABALHO REALIZADO = %.2lf\n", trabalho);

    return 0;
}



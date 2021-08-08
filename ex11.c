#include <stdio.h>
#include <math.h>

int main(){
    float percentd, percenti, vcarrof, vcarro;

    scanf("%f%*c", &vcarrof);
    scanf("%f%*c", &percentd);
    scanf("%f%*c", &percenti);

    vcarro = vcarrof*(1+(percentd/100)) + vcarrof*((percenti/100));

    printf("O VALOR DO CARRO E = %.2f", vcarro);

    return 0;
}
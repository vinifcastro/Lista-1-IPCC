#include <stdio.h>

int main(){

    float tempcelsius, tempfar, pol, mm;

    scanf("%f%*c",&tempfar);
    scanf("%f",&pol);

    tempcelsius = (5*tempfar-160)/9;
    mm = pol * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\n", tempcelsius);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", mm);

    return 0;
}
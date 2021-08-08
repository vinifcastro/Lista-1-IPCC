#include <stdio.h>
#include <math.h>

int main(){
    float raio, h, areat, areac, areal, custo;

    scanf("%f%*c",&raio);
    scanf("%f",&h);

    areac = 3.14159*(raio*raio);
    areal = 3.14159*2.0*raio*h;
    areat = (2*areac) + areal;

    custo = areat*100.0;

    printf("O VALOR DO CUSTO E = %.2f\n", custo);

    return 0;
}
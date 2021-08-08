#include <stdio.h>
#include <math.h>

int main(){
    
    float a, b, c, delta;

    scanf("%f%*c",&a);
    scanf("%f%*c",&b);
    scanf("%f",&c);

    delta=((pow(b,2) - (4*a*c)));

    printf("O VALOR DE DELTA E = %.2f\n", delta);

    return 0;
}
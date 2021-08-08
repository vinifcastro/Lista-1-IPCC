#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, d, det;

    scanf("%f%*c",&a);
    scanf("%f%*c",&b);
    scanf("%f%*c",&c);
    scanf("%f%*c",&d);

    det= (a*d) - (b*c);

    printf("O VALOR DO DETERMINANTE E = %.2f",det);

    return 0;
    }
#include <stdio.h>
#include <math.h>

int main(){

    float h, a, areab, volume;

    scanf("%f%*c", &h);
    scanf("%f%*c", &a);

    areab = (3*(pow(a,2))*(sqrt(3)))/2;
    volume = (areab*h)/3;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main (){

    float a, b, c, d, e, f, x, y;

    scanf("%f%*c", &a);
    scanf("%f%*c", &b);
    scanf("%f%*c", &c);
    scanf("%f%*c", &d);
    scanf("%f%*c", &e);
    scanf("%f%*c", &f);

    y = (((f*a)-(d*c))/((e*a)-(d*b)));
    x = (c-(b*y))/a;

    printf("O VALOR DE X E = %.2f\n",x);
    printf("O VALOR DE Y E = %.2f\n",y);

    return 0;
}
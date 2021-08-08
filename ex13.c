#include <stdio.h>
#include <math.h>

int main(){

    float x1, y1, x2, y2, dab;

    scanf("%f%*c", &x1);
    scanf("%f%*c", &y1);
    scanf("%f%*c", &x2);
    scanf("%f%*c", &y2);

    dab = sqrt((pow((x2-x1),2.0))+(pow((y2-y1),2.0)));

    printf("A DISTANCIA ENTRE A e B = %.2f\n",dab);
    return 0;
}
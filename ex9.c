#include <stdio.h>
#include <math.h>

float x, arredondado[3];
int i;

int main(){

    scanf("%f", &x);
    decimal(1);
    decimal(2);
    decimal(3);
    printf("%.6f\n", arredondado[1]);
    printf("%.6f\n", arredondado[2]);
    printf("%.6f\n", arredondado[3]);
    return 0;
}

void decimal (int k){
    i = (pow(10, k)*x)+0.5;
    arredondado[k] = pow((pow(10, k)), -1) * i;
}
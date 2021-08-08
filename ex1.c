#include <stdio.h>
 
int main(){
 
    float kw, smin, ckw, cc, cd;
 
    scanf("%f%*c", &smin);
    scanf("%f", &kw);
    ckw = (( 0.7 * smin )/100);
    cc = ckw * kw;
    cd = cc * 0.9;
 
    printf("Custo por kW: R$ %.2f\n", ckw);
    printf("Custo do consumo: R$ %.2f\n", cc);
    printf("Custo com desconto: R$ %.2f\n", cd);
 
    return 0;
}
#include <stdio.h>

unsigned int main(){

    int dec, k, j;
    float bin;
    bin = 0;
    k = 1;

    scanf("%d", &dec);

    if((0<=dec) && (dec<=255)){
        while(dec >= 1){
            j = dec%2;
            dec = dec/2;
            bin = bin + (j*k);
            k = k*10;
        }
        printf("%08.0f\n", bin);
    }
    else {
        printf("Numero invalido!\n");
    }
    return 0;
}
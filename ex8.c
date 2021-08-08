#include <stdio.h>

int main(){
    
    float hrs, min, seg;

    scanf("%f%*c", &hrs);
    scanf("%f%*c", &min);
    scanf("%f%*c", &seg);

    seg = seg + (hrs*3600) + (min*60);

    printf("O TEMPO EM SEGUNDOS E = %.0f", seg);
    return 0;

}
#include <stdio.h>
int main(){
    float v1,v2,v3,premio;
    printf("Valor investido pelo apostador 1: ");
    scanf("%f", &v1);
    printf("Valor investido pelo apostador 2: ");
    scanf("%f", &v2);
    printf("Valor investido pelo apostador 3: ");
    scanf("%f", &v3);
    printf("Digite o valor do premio: ");
    scanf("%f", &premio);
    printf("O apostador 1 ganhara %.2f\n", v1*premio/(v1+v2+v3));
    printf("O apostador 2 ganhara %.2f\n", v2*premio/(v1+v2+v3));
    printf("O apostador 3 ganhara %.2f\n", v3*premio/(v1+v2+v3));
    return 0;
}

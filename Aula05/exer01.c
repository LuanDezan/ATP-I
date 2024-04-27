#include <stdio.h>
int main(){
    float valor, cupom;
    printf("Digite o valor da gasto na compra: ");
    scanf("%f", &valor);
    cupom = valor/20;
    cupom = (int)cupom;
    printf("O cliente recebeu %.0f cupons.", cupom);
    return 0;
}

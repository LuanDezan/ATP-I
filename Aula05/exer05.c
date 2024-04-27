#include <stdio.h>
int main(){
    float dias;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f", &dias);
    printf("O encanador ganhou %f de valor bruto.\nO valor do desconto foi %f.\nO valor liquido foi %f.", dias*30,dias*30*8/100, dias*30*92/100);
    return 0;
}

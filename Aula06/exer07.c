//classificar produtos
#include <stdio.h>
int main(){
    float valor;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    if (valor < 100){
        printf("BARATO");
    } else if(valor >=100 && valor <= 500){
        printf("NORMAL");
    } else {
        printf("CARO");
    }
    return 0;
}

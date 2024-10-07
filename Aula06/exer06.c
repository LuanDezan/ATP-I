//reajuste salario
#include <stdio.h>
int main(){
    float salario;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    if(salario <= 1000){
        printf("Salario reajustado: %f", salario+(20*salario/100));
    } else if(salario > 1000 && salario<2000){
        printf("Salario reajustado: %f", salario+(10*salario/100));
    } else{
        printf("SALARIO SEM REAJUSTE: %f",salario);
    }
    return 0;
}

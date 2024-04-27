//prestacao e salario
#include <stdio.h>
int main(){
    float salario,prest;
    printf("Informe o salario: ");
    scanf("%f", &salario);
    printf("Informe o valor da prestacao: ");
    scanf("%f", &prest);
    if (prest > salario*0.2){
        printf("EMPRESTIMO NAO CONCEDIDO");
    } else {
        printf("EMPRESTIMO CONCEDIDO");
    }
    return 0;
}

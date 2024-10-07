//select operacao
#include <stdio.h>
int main(){
    float num1,num2;
    char operacao;
    printf("Digite primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite segundo numero: ");
    scanf("%f", &num2);
    fflush(stdin);
    printf("Informe a operacao: ");
    scanf("%c", &operacao);
    if (operacao == '+'){
        printf("Resultado: %f %c %f = %f", num1,operacao,num2,num1+num2);
    } else{
        if(operacao == '-'){
            printf("Resultado: %f %c %f = %f", num1,operacao,num2,num1-num2);
        } else{
            if(operacao == '*'){
                printf("Resultado: %f %c %f = %f", num1,operacao,num2,num1*num2);
            } else {
                if(operacao == '/'){
                    printf("Resultado: %f %c %f = %f", num1,operacao,num2,num1/num2);
                } else{
                    printf("Operacao invalida");
                }
            }
        }
    }
    return 0;
}

//switch operações
#include<stdio.h>
int main(){
    float num1,num2;
    char op;
    printf("Digite dois numeros: ");
    scanf("%f%f",&num1,&num2);
    fflush(stdin);
    printf("Digite a operacao desejada(+,-,*,/): ");
    scanf("%c",&op);
    switch(op){
        case '+':
            printf("%f %c %f = %f",num1,op,num2,num1+num2);
            break;
        case '-':
            printf("%f %c %f = %f",num1,op,num2,num1-num2);
            break;
        case '*':
            printf("%f %c %f = %f",num1,op,num2,num1*num2);
            break;
        case '/':
            printf("%f %c %f = %f",num1,op,num2,num1/num2);
            break;
        default:
            printf("OPERACAO INVALIDA");
            break;
    }
    return 0;
}

//switch menu
#include<stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1,num2;
    char op;
    printf("Digite dois valores: ");
    scanf("%f%f",&num1,&num2);
    fflush(stdin);
    printf("MENU\n1- Somar os dois n�meros\n2- Subtrair os dois n�meros\n3- Multiplicar os dois n�meros\n4- Dividir os dois n�meros (o denominador n�o pode ser zero)\n5- Sair\nDigite uma op��o:");
    scanf("%c",&op);
    switch(op){
        case '1':
            printf("%f + %f = %f",num1,num2,num1+num2);
            break;
        case '2':
            printf("%f - %f = %f",num1,num2,num1-num2);
            break;
        case '3':
            printf("%f * %f = %f",num1,num2,num1*num2);
            break;
        case '4':
            if(num2!=0){
                printf("%f / %f = %f",num1,num2,num1/num2);
                break;
            } else{
                printf("DENOMINADOR DEVE SER DIFERENTE DE 0");
                break;
            }
        case '5':
            printf("");
            break;
        default:
            printf("OP��O DIGITADA INV�LIDA");
            break;
    }
    return 0;
}

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
    printf("MENU\n1- Somar os dois números\n2- Subtrair os dois números\n3- Multiplicar os dois números\n4- Dividir os dois números (o denominador não pode ser zero)\n5- Sair\nDigite uma opção:");
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
            printf("OPÇÃO DIGITADA INVÁLIDA");
            break;
    }
    return 0;
}

//switch codigo do produto
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d",&codigo);
    switch(codigo){
        case 1:
            printf("Alimento n�o-perec�vel");
            break;
        case 2:case 3:case 4:
            printf("Alimento perec�vel");
            break;
        case 5:case 6:
            printf("Vestu�rio");
            break;
        case 7:
            printf("Higiene Pessoal");
            break;
        case 8 ... 15:
            printf("Limpeza e Utens�lios Dom�sticos");
            break;
        default:
            printf("Inv�lido");
    }
    return 0;
}

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
            printf("Alimento não-perecível");
            break;
        case 2:case 3:case 4:
            printf("Alimento perecível");
            break;
        case 5:case 6:
            printf("Vestuário");
            break;
        case 7:
            printf("Higiene Pessoal");
            break;
        case 8 ... 15:
            printf("Limpeza e Utensílios Domésticos");
            break;
        default:
            printf("Inválido");
    }
    return 0;
}

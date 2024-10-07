//cardápio lanchonete switch
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int codigo,qt;
    printf("Digite o codigo do item: ");
    scanf("%d",&codigo);
    printf("Digite a quantidade: ");
    scanf("%d",&qt);
    switch(codigo){
        case 100:
            printf("Total a pagar: %d",qt*7);
            break;
        case 101:
            printf("Total a pagar: %d",qt*5);
            break;
        case 102:
            printf("Total a pagar: %d", qt*10);
            break;
        case 103:
            printf("Total a pagar: %d",qt*12);
            break;
        case 104:
            printf("Total a pagar: %d",qt*3);
            break;
        default:
            printf("CODIGO DO PRODUTO INVÁLIDO");
            break;
    }
    return 0;
}

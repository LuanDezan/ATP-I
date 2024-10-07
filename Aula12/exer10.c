//cardápio de lanchonete
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int qtd,code,qtd2;
    float total=0;
    printf("Informe a quantidade de itens deste pedido: ");
    scanf("%d",&qtd);
    for(int cont=0;cont<qtd;cont++){
        printf("Código do item: ");
        scanf("%d",&code);
        switch(code){
            case 100:
                printf("Quantidade do item %d: ",cont+1);
                scanf("%d",&qtd2);
                printf("Subtotal do item %d: %f\n",cont+1,10.00*qtd2);
                total = total+(10.00*qtd2);
                break;
            case 101:
                printf("Quantidade do item %d: ",cont+1);
                scanf("%d",&qtd2);
                printf("Subtotal do item %d: %f\n",cont+1,12.00*qtd2);
                total = total+(12.00*qtd2);
                break;
            case 102:
                printf("Quantidade do item %d: ",cont+1);
                scanf("%d",&qtd2);
                printf("Subtotal do item %d: %f\n",cont+1,15.00*qtd2);
                total = total+(15.00*qtd2);
                break;
            case 103:
                printf("Quantidade do item %d: ",cont+1);
                scanf("%d",&qtd2);
                printf("Subtotal do item %d: %f\n",cont+1,11.00*qtd2);
                total = total+(11.00*qtd2);
                break;
            case 104:
                printf("Quantidade do item %d: ",cont+1);
                scanf("%d",&qtd2);
                printf("Subtotal do item %d: %f\n",cont+1,15.00*qtd2);
                total = total+(15.00*qtd2);
                break;
            case 105:
                printf("Quantidade do item %d: ",cont+1);
                scanf("%d",&qtd2);
                printf("Subtotal do item %d: %f\n",cont+1,3.00*qtd2);
                total = total+(3.00*qtd2);
                break;
            default:
                printf("CODIGO INVALIDO\n");

        }
    }
    printf("\nTotal Geral: %f",total);
    return 0;
}

//maior valor entre 5 valores
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num,cont=0,maior=0;
    while(cont<5){
        printf("Digite o %d° valor: ",cont+1);
        scanf("%d",&num);
        if(num > maior || cont == 0){
            maior = num;
        }
        cont++;
    }
    printf("Maior valor: %d",maior);
    return 0;
}

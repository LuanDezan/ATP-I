//maior,menor,soma,média dos valores
#include<stdio.h>
int main(){
    int maior,menor,soma=0,num,cont = 0;
    float media;
    while(cont < 5){
        printf("Digite o %do valor: ",cont+1);
        scanf("%d",&num);
        if(num > maior || cont == 0){
            maior = num;
        }
        if(num < menor || cont==0){
            menor = num;
        }
        soma = num + soma;
        cont++;
    }
    media=soma/5.0;
    printf("Maior: %d\nMenor: %d\nSoma: %d\nMedia: %f",maior,menor,soma,media);
    return 0;
}

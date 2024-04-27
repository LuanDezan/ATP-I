//maior,menor,soma,media de 5 valores do while
#include<stdio.h>
int main(){
    float maior,menor,soma=0,media,num;
    int cont=0;
    do{
        printf("Informe o %do valor: ",cont+1);
        scanf("%f",&num);
        if(maior<num || cont==0){
            maior = num;
        }
        if(menor>num || cont ==0){
            menor = num;
        }
        soma = soma+num;
        cont++;
    }while(cont<5);
    printf("Maior: %f\nMenor: %f\nSoma: %f\nMedia: %f",maior,menor,soma,soma/5);
    return 0;
}

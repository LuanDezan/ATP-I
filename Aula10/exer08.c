//maior,menor,soma,media de 5 valores, for
#include<stdio.h>
int main(){
    float num,soma=0,maior,menor;
    for(int cont=0;cont<5;cont++){
        printf("Digite o valor %d: ",cont+1);
        scanf("%f",&num);
        if(maior<num || cont==0){
            maior=num;
        }
        if(menor>num || cont==0){
            menor=num;
        }
        soma=soma+num;
    }
    printf("Maior: %f\nMenor: %f\nSoma: %f\nMedia: %f",maior,menor,soma,soma/5);
    return 0;
}

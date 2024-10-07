//média cinco valores while
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num,cont = 0,soma = 0;
    float media;
    while(cont < 5){
        cont++;
        printf("Digite o %d° valor: ",cont);
        scanf("%d",&num);
        soma = soma + num;
    }
    media = soma/5.0;
    printf("Media: %f",media);
    return 0;
}

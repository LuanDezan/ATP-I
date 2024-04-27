//soma e media
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num,cont=0,soma=0,qtd;
    float media;
    printf("Digite a quantidade de valores: ");
    scanf("%d",&qtd);
    while(cont < qtd){
        cont++;
        printf("Digite o %d° valor: ",cont);
        scanf("%d",&num);
        soma = soma + num;
    }
    printf("Soma: %d\n",soma);
    printf("Média: %f",soma/(float)qtd);
    return 0;
}

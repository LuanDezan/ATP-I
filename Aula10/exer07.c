//soma e media, for
#include<stdio.h>
int main(){
    int n;
    float num,soma=0;
    printf("Informe a quantidade de valores: ");
    scanf("%d",&n);
    for(int cont=0;cont<n;cont++){
        printf("Digite o valor %d: ",cont+1);
        scanf("%f",&num);
        soma = soma+num;
    }
    printf("Soma: %f\nMedia: %f",soma,soma/n);
    return 0;
}

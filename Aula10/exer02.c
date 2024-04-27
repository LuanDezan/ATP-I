//soma e media dos valores fornecidos, do while
#include<stdio.h>
int main(){
    int n,cont=0;
    float num,soma;
    printf("Informe a quantidade de valores: ");
    scanf("%d",&n);
    do{
        printf("Valor %d: ",cont+1);
        scanf("%f",&num);
        soma= soma+num;
        cont++;
    }while(cont<n);
    printf("Soma: %f\nMedia: %f",soma,soma/n);
    return 0;
}

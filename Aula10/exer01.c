//do while, média entre cinco valores
#include<stdio.h>
int main(){
    float num,soma=0;
    int cont=0;
    do{
        printf("Digite o %do numero: ",cont+1);
        scanf("%f",&num);
        soma= soma+num;
        cont++;
    }while(cont<5);
    printf("Media: %f",soma/5);
    return 0;
}

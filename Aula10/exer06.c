//media de 5 valores, for
#include<stdio.h>
int main(){
    float num,soma=0;
    for(int cont=0;cont<5;cont++){
        printf("Informe valor %d: ",cont+1);
        scanf("%f",&num);
        soma = soma+num;
    }
    printf("Media: %f",soma/5);
    return 0;
}

//pares e impares, do while
#include<stdio.h>
int main(){
    int num,par=0,impar=0;
    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d",&num);
        if(num%2==0 && num!=0){
            par = par+1;
        }
        if(num%2!=0){
            impar = impar+1;
        }
    }while(num!=0);
    printf("Par: %d\nImpar: %d",par,impar);
    return 0;
}

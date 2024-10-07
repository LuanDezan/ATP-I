//pares e ímpares, for
#include<stdio.h>
int main(){
    int par=0,impar=0;
    for(int num=1;num!=0;){
        printf("Digite um valor inteiro positivo: ");
        scanf("%d",&num);
        if(num%2==0 && num!=0){
            par=par+1;
        }
        if(num%2!=0){
            impar=impar+1;
        }
    }
    printf("Par: %d\nImpar: %d",par,impar);
    return 0;
}

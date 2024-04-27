//pares e ímpares
#include<stdio.h>
int main(){
    int par=0,impar=0,num,temp = 0;
    while(num!= 0 || temp == 0){
        printf("Digite um valor inteiro positivo: ");
        scanf("%d",&num);
        if(num%2==0 && num!=0){
            par=par+1;
        } else{
            if(num%2==1){
                impar=impar+1;
            }
        }
        temp++;
    }
    printf("%d pares e %d impares",par,impar);
    return 0;
}

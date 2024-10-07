//ano bissexto
#include<stdio.h>
int main(){
    int ano;
    printf("Informe o ano: ");
    scanf("%d",&ano);
    if(ano%400==0 || (ano%4==0 && ano%100!=0)){
        printf("ANO BISSEXTO");
    } else{
        printf("ANO NAO BISSEXTO");
    }
    return 0;
}

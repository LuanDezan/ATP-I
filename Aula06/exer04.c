//numeros iguais ou diferentes
#include <stdio.h>
int main(){
    float n1,n2;
    printf("Digite dois numeros: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    if (n1 == n2){
        printf("NUMEROS IGUAIS");
    } else{
        printf("NUMEROS DIFERENTES");
    }
    return 0;
}

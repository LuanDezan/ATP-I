//divisivel por 3 ou 5, mas nao pelos dois
#include<stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(num%3==0 && num%5==0){
        printf("NUMEROS SIMULTANEAMENTE DIVISIVEIS POR 3 E 5");
    } else{
        if(num%3==0 || num%5==0){
            printf("NUMERO DIVISIVEL POR 3 OU 5");
        } else{
            printf("NUMERO NAO DIVISIVEL POR 3 OU 5");
        }
    }
    return 0;
}

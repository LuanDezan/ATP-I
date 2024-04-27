//menor de idade

#include <stdio.h>
int main(){
    int idade;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    if(idade >= 18){
        printf("MAIOR DE IDADE");
    } else{
        printf("MENOR DE IDADE");
    }
    return 0;
}

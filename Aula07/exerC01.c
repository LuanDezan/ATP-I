//classificar idade nadador
#include<stdio.h>
int main(){
    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%d",&idade);
    if(idade>= 5 && idade<=7){
        printf("Categoria: Infantil A 5 a 7");
    } else{
        if(idade >=8 && idade<=10){
            printf("Categoria: Infantil B 8 a 10");
        } else{
            if(idade >=11 && idade<=13){
                printf("Categoria: Juvenil A 11 a 13");
            } else{
                if(idade >=14 && idade<=17){
                    printf("Categoria: Juvenil B");
                } else{
                    if(idade>=18){
                        printf("Categoria: Adulto");
                    } else{
                        printf("IDADE INVALIDA");
                    }
                }
            }
        }
    }
    return 0;
}

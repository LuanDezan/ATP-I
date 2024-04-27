//mês por extenso
#include <stdio.h>
int main(){
    int mes;
    printf("Digite o numero do mes: ");
    scanf("%d", &mes);
    if(mes == 1){
        printf("Mes por extenso: Janeiro");
    } else if(mes == 2){
        printf("Mes por extenso: Fevereiro");
    } else if(mes == 3){
        printf("Mes por extenso: Marco");
    } else if(mes == 4){
        printf("Mes por extenso: Abril");
    } else if(mes == 5){
        printf("Mes por extenso: Maio");
    } else if(mes == 6){
        printf("Mes por extenso: Junho");
    } else if(mes == 7){
        printf("Mes por extenso: Julho");
    } else if(mes == 8){
        printf("Mes por extenso: Agosto");
    } else if(mes == 9){
        printf("Mes por extenso: Setembro");
    } else if(mes == 10){
        printf("Mes por extenso: Outubro");
    } else if(mes == 11){
        printf("Mes por extenso: Novembro");
    } else if(mes == 12){
        printf("Mes por extenso: Dezembro");
    } else {
        printf("NUMERO INVALIDO");
    }
    return 0;
}

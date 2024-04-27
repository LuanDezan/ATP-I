//aposentadoria
#include<stdio.h>
int main(){
    int idade,trabalho;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    printf("Informe tempo de trabalho em anos completos: ");
    scanf("%d", &trabalho);
    if(idade >= 65 || trabalho >= 30 || (idade >= 60 && trabalho >=25)){
        printf("Pode se aposentar");
    } else{
        printf("Aposentadoria nao disponivel");
    }
    return 0;
}

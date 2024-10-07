//numero extenso
#include <stdio.h>
int main(){
    int num;
    printf("Informe um digito inteiro de 1 a 5: ");
    scanf("%d", &num);
    if (num == 1){
        printf("Numero por extenso: Um");
    } else if(num == 2){
        printf("Numero por extenso: Dois");
    }else if(num == 3){
        printf("Numero por extenso: Tres");
    }else if(num == 4){
        printf("Numero por extenso: Quatro");
    }else if(num == 5){
        printf("Numero por extenso: Cinco");
    } else{
        printf("NUMERO DIGITADO INVALIDO");
    }
    return 0;
}

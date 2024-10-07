//ler uma string com formato data "DD/MM/AAAA", e verificar se está no formato exigido
#include<stdio.h>
int main(){
    char data[11];
    printf("Digite a data (DD/MM/AAAA): ");
    scanf("%s",&data);
    if(data[2]!='/'||data[5]!='/' || data[9]==NULL){
        printf("FORMATO INVALIDO");
    }else{
        printf("FORMATO VALIDO");
    }
}

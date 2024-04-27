//switch idade nadador
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%d",&idade);
    switch(idade){
        case 5 ... 7:
            printf("Categoria: Infantil A 5 a 7");
            break;
        case 8 ... 10:
            printf("Categoria: Infantil B 8 a 10");
            break;
        case 11 ... 13:
            printf("Categoria: Juvenil A 11 a 13");
            break;
        case 14 ... 17:
            printf("Categoria: Juvenil B");
            break;
        case 0 ... 4:
            printf("NÃO PODE COMPETIR");
            break;
        default:
            printf("Categoria: Adulto");
            break;
    }
    return 0;
}

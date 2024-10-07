//ler o nome,idade e endereço, em seguida exibir na tela
#include<stdio.h>
int main(){
    char nome[50],endereco[30];
    int idade;
    printf("Informe seu nome: ");
    scanf("%s",&nome);
    printf("Informe sua idade: ");
    scanf("%d",&idade);
    fflush(stdin);
    printf("Informe seu endereco: ");
    scanf("%s",&endereco);
    printf("Nome: %s\nIdade: %d\nEndereco: %s\n",nome,idade,endereco);
    return 0;
}

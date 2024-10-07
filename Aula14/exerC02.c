//leia nome, idade, endereço e telefone de uma pessoa e, em seguida, imprima essas informações em uma única linha
#include<stdio.h>
int main(){
    char nome[50],ender[50],tel[15];
    int idade;
    printf("Digite seu nome: ");
    gets(nome);
    fflush(stdin);
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    fflush(stdin);
    printf("Digite seu endereco: ");
    gets(ender);
    fflush(stdin);
    printf("Digite seu telefone: ");
    gets(tel);
    fflush(stdin);
    printf("Nome: %s Idade: %d Endereco: %s Telefone: %s",nome,idade,ender,tel);
    return 0;
}

//leia nome, idade, endereço e telefone e, em seguida, imprima essas informações em uma única linha. Utilizando getchar
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char nome[100],ender[100],tel[100];
    int idade;
    printf("Informe seu nome: ");
    gets(nome);
    printf("Informe sua idade: ");
    scanf("%d",&idade);
    getchar();
    printf("Informe o endereco: ");
    gets(ender);
    printf("Informe o telefone: ");
    gets(tel);
    printf("Nome: %s Idade: %d Endereco: %s Telefone: %s",nome,idade,ender,tel);
    return 0;
}

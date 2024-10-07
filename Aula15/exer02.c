//ler uma string e apresentar seu tamanho
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Digite sua string: ");
    gets(a);
    printf("%d",strlen(a));
    return 0;
}

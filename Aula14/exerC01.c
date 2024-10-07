//leia uma string e imprima o seu conteúdo
#include<stdio.h>
int main(){
    char str[100];
    printf("Digite sua string: ");
    fgets(str,100,stdin);
    printf("%s",str);
    return 0;
}

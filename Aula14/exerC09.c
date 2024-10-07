//ler uma string e apresentar seu tamanho
#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("Digite sua string: ");
    fgets(str,100,stdin);
    while(str[i]!='\0'){
        i++;
    }
    printf("Tamanho: %d",i-1);
    return 0;
}

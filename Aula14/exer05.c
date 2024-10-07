//exibir os 3 últimos caracteres de uma string
#include<stdio.h>
int main(){
    char c[100];
    int i=0,qtd;
    printf("Digite sua string: ");
    scanf("%s",&c);
    while(c[i]!='\0'){
        i++;
    }
    qtd=i;
    for(int i=qtd-3;i<qtd;i++){
        printf("%c",c[i]);
    }
    return 0;
}

//ler uma quantidade de palavras informadas pelo usuário e indicar qual seria a primeira e a última considerando a ordem alfabética
#include<stdio.h>
#include<string.h>
int main(){
    int qtd;
    char str[100],maior[100],menor[100];
    printf("Informe quantas palavras ira digitar: ");
    scanf("%d",&qtd);
    for(int i=0;i<qtd;i++){
        scanf("%s",&str);
        if(strcmp(str,maior)==1 || i==0){
            strcpy(maior,str);
        }
        if(strcmp(str,menor)==-1 || i==0){
            strcpy(menor,str);
        }
    }
    printf("Maior: %s\nMenor: %s\n",maior,menor);
    return 0;
}

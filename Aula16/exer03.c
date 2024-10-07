//receber string e caracter, substituir caracter em string por '_'
#include<stdio.h>
char conver(char string[], char caracter){
    int i=0;
    while(string[i]!='\0'){
        if(string[i]==caracter){
            string[i]='_';
        }
        i++;
    }
}
int main(){
    char str[100], car;
    printf("Digite sua frase: ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Digite o caracter: ");
    scanf("%c",&car);
    printf("Frase nova: %s",conver(str,car));
    return 0;
}

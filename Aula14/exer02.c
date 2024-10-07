//verificar se uma string contém um determinado caractere
#include<stdio.h>
int main(){
    char str[50],search;
    int i=0,a=0;
    printf("Digite sua string: ");
    scanf("%s",&str);
    fflush(stdin);
    printf("Digite o caracter que procura: ");
    scanf("%c",&search);
    while(str[i]!='\0'){
        if(str[i]==search){
            a++;
        }
        i++;
    }
    printf("A string possui %d '%c'",a,search);
    return 0;
}

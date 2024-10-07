//Faça uma função denominada maior_menor para receber uma string e retornar
//por parâmetro a menor e a maior letra, considerando a ordem alfabética.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void maior_menor(char string[],char *maior,char *menor){
    int i=0;
    *maior = string[i];
    *menor = string[i];
    while(string[i]!='\0'){
        string[i]= tolower(string[i]);
        if(string[i]> *maior){
            *maior=string[i];
        }
        if(string[i]<*menor){
            *menor = string[i];
        }
        i++;
    }
}
int main(){
    char str[100],big,small;
    printf("Digite sua string: ");
    fgets(str,100,stdin);
    str[strlen(str)-1] = '\0';
    maior_menor(str,&big,&small);
    printf("Menor: %c\nMaior: %c\n",big,small);
}

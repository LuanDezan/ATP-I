//verificar se as strings são iguais
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("Digite a string 1: ");
    gets(str1);
    printf("Digite a string 2: ");
    gets(str2);
    int comp = strcmp(str1,str2);
    if(comp==0){
        printf("Strings iguais!");
    }else{
        printf("Strings diferentes!");
    }
}

//ler uma string e transferir o conteúdo para uma outra string
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("Informe sua string: ");
    gets(str1);
    strcpy(str2,str1);
    printf("String copiada: %s",str2);
    return 0;
}

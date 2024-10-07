//ler uma string e transferir o conteúdo para uma outra variável string
#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i=0;
    printf("Digite sua string: ");
    fgets(str1,100,stdin);
    while(str1[i]!='\0' && str1[i]!='\n'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("Copiada:%s",str2);
    return 0;
}

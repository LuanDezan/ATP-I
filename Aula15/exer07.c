//ler uma frase e ajustá-la de modo que a primeira letra de cada palavra esteja em maiúsculo e as demais em minúsculo
#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    printf("Informe sua string: ");
    gets(str);
    int size = strlen(str);
    for(int i=0;i<size;i++){
        if(str[i]==' '){
            if(str[i+1]>='a' && str[i+1]<='z'){
            str[i+1]=str[i+1]-32;
            }
        }else if(i==0){
            if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
            }
        }
    }
    printf("String modificada: %s",str);
    return 0;
}

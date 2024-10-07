//ler uma palavra e exibi-la com todos os caracteres em maiúsculo
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Informe sua string: ");
    gets(str);
    int size = strlen(str);
    for(int i=0;i<size;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("String modificada: %s",str);
    return 0;
}

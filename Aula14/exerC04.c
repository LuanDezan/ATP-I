//ler uma string que representa um padrão binário e, em seguida,substituir '0' por '1'
#include<stdio.h>
int main(){
    char b[100];
    int i=0;
    printf("Digite seu padrao binario: ");
    scanf("%s",&b);
    while(b[i]!='\0'){
        if(b[i]=='0'){
            b[i]='1';
        }
        i++;
    }
    printf("Nova string: %s",b);
    return 0;
}


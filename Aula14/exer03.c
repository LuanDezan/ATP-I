//ler um número binário e substituir o caractere '0' por um '*'
#include<stdio.h>
int main(){
    char b[100];
    int i=0;
    printf("Digite o numero binario: ");
    scanf("%s",&b);
    while(b[i]!='\0'){
        if(b[i]=='0'){
            b[i]='*';
        }
        i++;
    }
    printf("%s",b);
    return 0;
}

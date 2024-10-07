//ler uma string e apresentar a quantidade de vogais e nao vogais presentes na frase(minúsculas)
#include<stdio.h>
int main(){
    char str[100];
    int i=0,v=0,nv=0;
    printf("Digite sua string: ");
    fgets(str,100,stdin);
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u'){
            v++;
        }else if(str[i]!=' ' && str[i]!='\n'){
            nv++;
        }
        i++;
    }
    printf("Vogais: %d\nNao vogais: %d\n",v,nv);
    return 0;
}

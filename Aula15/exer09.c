//ler um número e escreve-lo por extenso, números inteiros entre 0 e 9999
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    char str[100],m,c,d,u;
    printf("Informe o numero: ");
    scanf("%d",&n);
    itoa(n,str,10);
    if(strlen(str)==4){
        m=str[0];
        c=str[1];
        d=str[2];
        u=str[3];
    }else if(strlen(str)==3){
        c=str[0];
        d=str[1];
        u=str[2];
    }else if(strlen(str)==2){
        d=str[0];
        u=str[1];
    }else if(strlen(str)==1){
        u=str[0];
    }
    switch(m){
        case '1':
            printf("Um mil");
            break;
    }

    return 0;
}

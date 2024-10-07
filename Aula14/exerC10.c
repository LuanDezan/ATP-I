//ler duas strings e verificar se elas são iguais
#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i=0,v=0;
    printf("Digite sua primeira frase: ");
    fgets(str1,100,stdin);
    printf("Digite sua segunda frase: ");
    fgets(str2,100,stdin);
    while(str1[i]!='\0'){
        if(str1[i]!=str2[i]){
            v=1;
        }
        i++;
    }
    if(v==1){
        printf("Strings diferentes!");
    }else{
        printf("Strings iguais!");
    }
    return 0;
}

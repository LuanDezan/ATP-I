//receba uma palavra e imprima de trás-para-frente
#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("Digite a string: ");
    fgets(str,100,stdin);
    while(str[i]!='\0'){
        i++;
    }
    for(i-2;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}

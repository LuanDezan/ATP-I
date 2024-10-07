//exibir os 3 primeiros caracteres de uma string
#include<stdio.h>
int main(){
    char c[50];
    printf("Digite sua string: ");
    scanf("%s",&c);
    for(int i=0;i<3;i++){
        printf("%c",c[i]);
    }
    return 0;
}

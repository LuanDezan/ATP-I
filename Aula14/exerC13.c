//verificando se string é palíndromo
#include<Stdio.h>
int main(){
    char str[100];
    int i=0,n=0,vrf=0;
    printf("Digite a string: ");
    scanf("%s",&str);
    while(str[i]!='\0'){
        i++;
    }
    while(i>=0){
        if(str[i-1]!=str[n]){
            vrf=1;
        }
        i--;
        n++;
    }
    if(vrf==1){
        printf("Nao palindromo!");
    }else{
        printf("Palindromo!");
    }
    return 0;
}

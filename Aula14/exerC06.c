//receba uma string e substitua as vogais pelo caractere '_' e em seguida exiba-a
#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("Digite sua string: ");
    fgets(str,100,stdin);
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u'){
            str[i]='_';
        }
        i++;
    }
    printf("Nova string: %s",str);
    return 0;
}

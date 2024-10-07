//Faça uma função denominada contagem para receber uma string e retornar por parâmetros a quantidade de vogais, quantidade de consoantes e quantidade de dígitos numéricos.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void contagem(char string[], int *vowel,int *consonant, int *digits){
    int in=0;
    while(string[in]!='\0'){
        string[in]= tolower(string[in]);
        if(isdigit(string[in])){
            *digits = *digits+1;
        }else if(string[in] == 'a' || string[in] == 'e' || string[in] == 'i' || string[in] == 'o' || string[in] == 'u'){
            *vowel = *vowel+1;
        }else{
            *consonant = *consonant+1;
        }
        in++;
    }
}
int main(){
    int vog=0,cons=0,num=0;
    char str[100];
    printf("Digite sua string: ");
    fgets(str,100,stdin);
    str[strlen(str)-1] = '\0';
    contagem(str,&vog,&cons,&num);
    printf("Vogais: %d\nConsoantes: %d\nDigitos: %d\n",vog,cons,num);
    return 0;
}

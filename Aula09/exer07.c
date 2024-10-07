//fatorial
#include<stdio.h>
int main(){
    int num,fat=1,cont=0;
    printf("Informe o numero a ser fatorado: ");
    scanf("%d",&num);
    while(cont < num){
        cont++;
        fat= fat*cont;
    }
    printf("%d",fat);
    return 0;
}

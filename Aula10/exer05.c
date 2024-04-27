//fatorial, do while
#include<stdio.h>
int main(){
    int fat=1,cont=0,num;
    printf("Informe o valor a ser fatorado: ");
    scanf("%d",&num);
    do{
        cont++;
        fat= fat*cont;
    }while(cont<num);
    printf("Fatorial: %d",fat);
    return 0;
}

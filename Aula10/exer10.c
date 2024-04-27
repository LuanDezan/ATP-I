//fatorial, for
#include<stdio.h>
int main(){
    int fat=1,num;
    printf("Digite o valor a ser fatorado: ");
    scanf("%d",&num);
    for(int cont=0;cont<num;cont++){
        fat=fat*(cont+1);
    }
    printf("Fatorial: %d",fat);
    return 0;
}

//Fa�a uma fun��o para calcular o fatorial de um n�mero e retornar por par�metro
//o valor do fatorial. Por exemplo: void fatorial (int n, int *fat);
#include<stdio.h>
void fat(int n, int *fat){
    while(n--){
        *fat = (n+1)*(*fat);
    }
}
int main(){
    int num,fatorial=1;
    printf("Digite o valor a ser fatorado: ");
    scanf("%d",&num);
    fat(num,&fatorial);
    printf("Fatorial: %d",fatorial);
    return 0;
}

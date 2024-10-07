//Função para receber o numerador e o denominador de uma divisão. A função deve devolver pelos parâmetros o quociente e o resto usando a seguinte assinatura: void quociente_resto(int n, int d, int *q, int *r)
// n=numerador; d=denominador;q=quociente;r=resto
#include<stdio.h>
void quociente_resto(int n, int d, int *q, int *r){
    *q=n/d;
    *r=n%d;
}

int main(){
    int num,den,quo,rest;
    printf("Digite o numerador: ");
    scanf("%d",&num);
    printf("Digite o denominador: ");
    scanf("%d",&den);
    quociente_resto(num,den,&quo,&rest);
    printf("Quociente: %d\nResto: %d\n",quo,rest);
    return 0;
}

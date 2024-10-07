//numeros entre 3 e N que são múltiplos de 3 ou 5
#include<stdio.h>
#include<math.h>
int main(){
    int N;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&N);
    for(int cont=3;cont<=N;cont++){
        if(cont%3==0 || cont%5==0){
            printf("%d\n",cont);
        }
    }
    return 0;
}

//sequência de Fibonacci
#include<stdio.h>
#include<math.h>
int main(){
    int n,f1=1,f2=1,temp;
    printf("Digite um valor: ");
    scanf("%d",&n);
    for(int cont=3;cont<=n;cont++){
        temp=f2;
        f2=f1;
        f1=f1+temp;
    }
    printf("Sequencia de Fibonacci: %d",f1);
    return 0;
}

//ler N números e armazena-los em um vetor
#include<stdio.h>
int main(){
    int N;
    printf("Informe a quantidade de numeros a ser armazenados: ");
    scanf("%d",&N);
    int num[N];
    for(int i=0;i<N;i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<N;i++){
        printf("%d ",num[i]);
    }
    return 0;
}

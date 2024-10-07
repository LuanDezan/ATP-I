//N números ler inverso
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
    for(int i=N-1;i>=0;i--){
        printf("%d ",num[i]);
    }
    return 0;
}

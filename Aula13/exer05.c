//N números e verificar sua existencia no array
#include<stdio.h>
#include<math.h>
int main(){
    int N,k,p;
    printf("Informe a quantidade de numeros a serem armazenados: ");
    scanf("%d",&N);
    int num[N];
    for(int i=0;i<N;i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Numero a ser procurado: ");
    scanf("%d",&k);
    for(int i=0;i<N;i++){
        if(num[i]==k){
          p = 1;
        }
    }
    if(p==1){
        printf("O numero %d esta no vetor.",k);
    }else{
        printf("O numero %d nao esta no vetor.",k);
    }
    return 0;
}

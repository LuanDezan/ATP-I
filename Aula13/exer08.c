//N números, verificar quem é primo e sua posição no vetor
#include<stdio.h>
#include<math.h>
int main(){
    int N,vf=0;
    printf("Informe a quantidade de numeros a serem armazenados: ");
    scanf("%d",&N);
    int num[N];
    for(int i=0;i<N;i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<N;i++){
        for(int n=2;n<num[i];n++){
            if(num[i]%n==0){
                vf=1;
            }
        }
        if(vf==0 && (num[i]!=0 && num[i]!=1)){
            printf("Numero %d posicao %d\n",num[i],i);
        }
        vf=0;
    }
    return 0;
}

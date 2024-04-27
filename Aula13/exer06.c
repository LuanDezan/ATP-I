//N números e mudar valor N1 por N2 no array
#include<stdio.h>
#include<math.h>
int main(){
    int N,n1,n2;
    printf("Informe a quantidade de numeros a serem armazenados: ");
    scanf("%d",&N);
    int num[N];
    for(int i=0;i<N;i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("N1: ");
    scanf("%d",&n1);
    printf("N2: ");
    scanf("%d",&n2);
    for(int i=0;i<N;i++){
        if(num[i]==n1){
            num[i]=n2;
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",num[i]);
    }

    return 0;
}

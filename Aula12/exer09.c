//Triângulo de Floyd
#include<stdio.h>
#include<math.h>
int main(){
    int N,r=0;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d",&N);
    for(int lin=1;lin<=N;lin++){
        for(int num=1;num<=lin;num++){
            r=r+1;
            printf("%d ",r);

        }
    printf("\n");
    }
    return 0;
}

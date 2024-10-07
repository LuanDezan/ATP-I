//maior elemento de um array
#include<stdio.h>
#include<math.h>
int main(){
    int maior=0, i=0,num[200];
    do{
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&num[i]);
        i++;
    }while(num[i-1]>0);
    for(int n=0;n<i;n++){
        if(maior<num[n]){
            maior=num[n];
        }
    }
    printf("%d",maior);
    return 0;
}

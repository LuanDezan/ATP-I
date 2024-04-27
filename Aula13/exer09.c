//ler 10 números diferentes, verificando se é diferente dos já armazenados no array
#include<stdio.h>
int main(){
    int i=0,check=0,num[10];
    while(i<10){
        printf("Digite o numero %d: ",i+1);
        scanf("%d",&num[i]);
        for(int n=i-1;n>=0 && i!=0;n--){
            if(num[i]==num[n]){
                check=1;
            }
        }
        if(check==1){
            printf("Numero deve ser diferente dos anteriores!\n");
            check=0;
        }else{
            i++;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",num[i]);
    }
    return 0;
}

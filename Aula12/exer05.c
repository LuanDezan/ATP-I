//verificação número primo
#include<stdio.h>
#include<math.h>
int main(){
    int num,check=0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&num);
    for(int cont=2;cont<num;cont++){
        if(num%cont==0){
            check = 1;
        }
    }
    if(check==1 || num==1 || num==0){
        printf("Numero nao primo");
    }else{
        printf("Numero primo");
    }
    return 0;
}

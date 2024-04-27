//ler 5 números e armazena-los em um vetor(array)
#include<stdio.h>
int main(){
    float num[4];
    for(int cont=0;cont<5;cont++){
        printf("Digite o valor %d: ",cont+1);
        scanf("%f",&num[cont]);
    }
    for(int n=0;n<5;n++){
        printf("%f\n",num[n]);
    }
    return 0;
}

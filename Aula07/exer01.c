//divisivel por 3 e por 5
#include<stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(num%3==0 && num%5==0){
        printf("Numero divisivel por 3 e por 5");
    } else{
        printf("Nao divisivel por 3 e por 5");
    }
    return 0;
}

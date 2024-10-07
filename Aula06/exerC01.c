//par ou impar]
#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("NUMERO PAR");
    } else {
        printf("NUMERO IMPAR");
    }
    return 0;
}

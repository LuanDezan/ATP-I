#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro de 3 digitos (de 100 a 999): ");
    scanf("%d", &num);
    printf("Os digitos invertidos do numero lido foi %d", (num%10)*100+(num%100-num%10)+((num-num%100)/100));
    return 0;
}

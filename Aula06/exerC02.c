//diferenca entre numeros
#include <stdio.h>
int main(){
    int num1,num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 > num2){
        printf("%d e maior\n", num1);
        printf("A diferenca entre eles e %d", num1-num2);
    } else if(num2  > num1){
    printf("%d e maior\n");
    printf("A diferenca entre eles e %d", num2-num1);
    } else {
        printf("NUMEROS IGUAIS");
    }
    return 0;
}

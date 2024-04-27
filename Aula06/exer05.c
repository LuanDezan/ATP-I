//ordem crescente
#include <stdio.h>
int main(){
    float n1,n2;
    printf("Digite dois numeros: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    if (n1 > n2){
        printf("%f,%f",n2,n1);
    } else if(n2 > n1){
        printf("%f, %f",n1,n2);
    } else{
        printf("NUMEROS IGUAIS");
    }
    return 0;
}

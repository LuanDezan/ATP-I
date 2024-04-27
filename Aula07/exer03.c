//classificacao de triangulos
#include <stdio.h>
int main(){
    float A,B,C;
    printf("Informe o valor do lado A do triangulo: ");
    scanf("%f", &A);
    printf("Informe o valor do lado B do triangulo: ");
    scanf("%f", &B);
    printf("Informe o valor do lado C do triangulo: ");
    scanf("%f", &C);
    if(A==B && B==C){
        printf("TRIANGULO EQUILATERO");
    } else{
        if(A==B || B==C || A==C){
            printf("TRIANGULO ISOSCELES");
        } else{
            printf("TRIANGULO ESCALENO");
        }
    }
    return 0;
}

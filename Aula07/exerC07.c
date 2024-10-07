//viabilidade triangulo
#include<stdio.h>
int main(){
    float A,B,C;
    printf("Informe os valors os lados (A,B e C) do triangulo: ");
    scanf("%f%f%f", &A,&B,&C);
    if(A>B+C || B>A+C || C>A+B){
        printf("OS VALORES NAO PODEM FORMAR UM TRIANGULO");
    } else{
        printf("VALORES PODEM FORMAR UM TRIANGULO");
    }
    return 0;
}

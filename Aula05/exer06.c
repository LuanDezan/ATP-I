#include <stdio.h>
int main(){
    float alt, raio;
    printf("Informe a altura e o raio do cilindro, respectivamente: ");
    scanf("%f", &alt);
    scanf("%f", &raio);
    printf("O volume do cilindro deu %f.", 3.141592*raio*raio*alt);
    return 0;
}

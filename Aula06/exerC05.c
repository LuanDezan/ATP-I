//notas validas e media
#include <stdio.h>
int main(){
    float n1, n2;
    printf("Informe nota 1: ");
    scanf("%f", &n1);
    printf("Informe nota 2: ");
    scanf("%f", &n2);
    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10){
        printf("Nota inserida com valor invalido.");
    } else {
        printf("A media das notas: %f", (n1+n2)/2);
    }
    return 0;
}

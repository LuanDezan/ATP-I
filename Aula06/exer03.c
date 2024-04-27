//aprovado ou reprovado
#include <stdio.h>
int main(){
    float n1,n2, media;
    printf("Digite nota 1: ");
    scanf("%f", &n1);
    printf("Digite nota 2: ");
    scanf("%f", &n2);
    media = (n1+n2)/2;
    if (media>=5){
        printf("APROVADO");
    } else{
        printf("REPROVADO");
    }
    return 0;
}

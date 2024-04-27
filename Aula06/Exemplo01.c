//exemplo de media
#include <stdio.h>
int main(){
    float media;
    printf("Digite media: ");
    scanf("%f", &media);
    if (media < 3){
        printf("REPROVADO\n");
    }else {
        if(media < 5){
            printf("EXAME\n");
        } else {
            printf("APROVADO\n");
        }
    }
    return 0;
}

//aprovado ou reprovado
#include<stdio.h>
int main(){
    float media,freq;
    printf("Informe a media: ");
    scanf("%f", &media);
    printf("Informe a frequencia em porcentagem: ");
    scanf("%f", &freq);
    if(media>=5 && freq>=70){
        printf("APROVADO");
    } else{
        if(media>3 && media <5 && freq>=70){
            printf("EXAME");
        } else{
            if(media<=3 || freq<70){
                printf("REPROVADO");
            }
        }
    }
    return 0;
}

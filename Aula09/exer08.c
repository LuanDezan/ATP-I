//média de N alunos
#include<stdio.h>
int main(){
    int alunos,cont=0;
    float media;
    printf("Informe a quantide de alunos: ");
    scanf("%d",&alunos);
    while(cont<alunos){
        printf("Informe a media do %do aluno: ",cont+1);
        scanf("%f",&media);
        if(media<0 || media>10){
            printf("Media Invalida\n");
        }else{
            cont++;
        }
    }
    return 0;
}

//calcular idade
#include <stdio.h>
int main(){
    int dia,mes,ano,adia,ames,aano;
    printf("Informe o dia, mes e ano de nascimento conforme o exemplo: 12 12 2000\n");
    scanf("%d%d%d",&dia,&mes,&ano);
    printf("Informe a data de hoje conforme o exemplo anterior: ");
    scanf("%d%d%d", &adia,&ames,&aano);
    if(mes<ames){
        printf("Idade ano: %d", aano-ano);
    } else{
        if(mes >ames){
            printf("Idade ano: %d", aano-ano-1);
        } else{
            if(adia>= dia){
                printf("Idade dia: %d", aano-ano);
            } else{
                printf("Idade dia: %d", aano-ano-1);
            }
        }
    }
    return 0;
}

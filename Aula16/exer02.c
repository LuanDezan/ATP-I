//horas, minutos e segundos para segundos
#include<stdio.h>
int conver(int hr, int min, int sec){
    int segundos = hr*3600+min*60+sec;
    return segundos;
}
int main(){
    int sec,min,hr;
    printf("Horas: ");
    scanf("%d",&hr);
    printf("Minutos: ");
    scanf("%d",&min);
    printf("Segundos: ");
    scanf("%d",&sec);
    printf("Segundos totais: %d", conver(hr,min,sec));
    return 0;
}

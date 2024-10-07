//media final
#include<stdio.h>
int main(){
    float mt,mp;
    printf("Informe media de trabalhos e provas, respectivamente: ");
    scanf("%f%f",&mt,&mp);
    if(mt>5 && mp >5){
        printf("MEDIA FINAL: %.2f", (mt+mp)/2);
    } else{
        if(mt < mp){
            printf("MEDIA FINAL: %.2f",mt);
        } else{
            printf("MEDIA FINAL: %.2f", mp);
        }
    }
    return 0;
}

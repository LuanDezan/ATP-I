//receber duas notas e retornar média
#include<stdio.h>
float media(float n1,float n2){
    return (n1+n2)/2;
}
int main(){
    float n1,n2;
    printf("Digite nota 1: ");
    scanf("%f",&n1);
    printf("Digite nota 2: ");
    scanf("%f",&n2);
    printf("Media: %f",media(n1,n2));
    return 0;
}

//equação do 2°grau
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    double a,b,c,delta;
    printf("Valor a: ");
    scanf("%lf",&a);
    if(a==0){
        printf("Não é quação de segundo grau");
    } else{
        printf("Valor b: ");
        scanf("%lf",&b);
        printf("Digite valor c: ");
        scanf("%lf",&c);
        delta=pow(b,2)-4*a*c;
        if(delta<0){
            printf("Não existe raiz");
        }else{
            if(delta==0){
                printf("Raiz única: %f",-b/(2*a));
            }else{
                if(delta>0){
                    printf("Raiz 1: %f\nRaiz 2: %f\n",(-b+sqrt(delta))/(2*a),((-b-sqrt(delta))/(2*a)));
                }
            }
        }
    }

    return 0;
}

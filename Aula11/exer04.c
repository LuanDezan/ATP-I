//potenciação
#include<stdio.h>
#include<math.h>
int main(){
    double base,exp;
    printf("Digite a base e o expoente, respectivamente: ");
    scanf("%lf%lf",&base,&exp);
    printf("Resultado: %f",pow(base,exp));
    return 0;
}

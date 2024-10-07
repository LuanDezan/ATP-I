//seno e cosseno do ângulo
#include<stdio.h>
#include <math.h>
#define PI 3.14159265
int main(){
    double ang;
    printf("Digite o angulo: ");
    scanf("%lf",&ang);
    printf("Seno: %f\nCosseno: %f\n",sin(ang*PI/180),cos(ang*PI/180));
    return 0;
}

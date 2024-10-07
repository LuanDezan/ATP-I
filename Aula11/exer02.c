//ceil,floor,round e trunc
#include<stdio.h>
#include<math.h>
int main(){
    double num;
    printf("Digite um numero: ");
    scanf("%lf",&num);
    printf("Ceil: %f\nFloor: %f\nRound: %f\nTrunc: %f\n",ceil(num),floor(num),round(num),trunc(num));
    return 0;
}

//E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    double E=1,fat=1;
    printf("Informe o valor: ");
    scanf("%d",&num);
    for(int cont=1;cont<=num;cont++){
        fat=fat*cont;
        E = E+(1/fat);
    }
    printf("%f",E);
    return 0;
}

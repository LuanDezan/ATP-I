//ler numero e exibir o quadrado, o cubo e a raiz
#include<stdio.h>
#include<math.h>
int main(){
    double num;
    printf("Digite um numero para ser tirado seu quadrado, cubo e raiz: ");
    do{
      scanf("%lf",&num);
      printf("Quadrado: %f\nCubo: %f\nRaiz: %f\n\n",pow(num,2),pow(num,3),sqrt(num));
    }while(num>0);
    return 0;
}

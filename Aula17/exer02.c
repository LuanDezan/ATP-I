//função para receber valor e devolver por parâmetro: sua raiz quadrada, seu quadrado e se é par ou impar
#include<stdio.h>
#include<math.h>
void calcular(int n, double *raiz,double *quadrado, int *par){
    *raiz = sqrt(n);
    *quadrado = pow(n,2);
    if(n%2==0){
        *par=1;
    }else{
        *par=0;
    }
}
int main(){
    int num,impar;
    double sqrt, pow;
    printf("Digite o valor: ");
    scanf("%d",&num);
    calcular(num,&sqrt,&pow,&impar);
    printf("Raiz quadrada: %f\nQuadrado: %f\nSe for impar ou par: %d\n",sqrt,pow,impar);
    return 0;
}

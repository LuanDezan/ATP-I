//maior numero e menor
#include<stdio.h>
#include<math.h>
int main(){
    int num,maior=0,menor=2147483647;
    printf("Digite numeros inteiros: ");
    do{
        scanf("%d",&num);
        if(maior<num){
            maior=num;
        }
        if(menor>num && num>=0){
            menor=num;
        }
    }while(num>=0);
    printf("Maior: %d\nMenor: %d\n",maior,menor);
    return 0;
}


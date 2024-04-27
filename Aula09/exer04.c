//menor valor entre 5 valores
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int num,valor,cont=0,temp;
    while(cont<5){
        cont++;
        printf("Digite o %d° valor: ",cont);
        scanf("%d",&num);
        if(num > temp){
            num = temp;
        }
        temp = num;
    }
    printf("Menor valor: %d",num);
    return 0;
}

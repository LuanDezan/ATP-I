//idade, altura,peso
#include<stdio.h>
int main(){
    int idade,N,cont=0,temp1=0,temp2=0,qtd1=0,qtd2=0;
    float alt,peso;
    printf("Informe a quantidade de pessoas: ");
    scanf("%d",&N);
    while(cont < N){
        printf("Informe a idade da %do pessoa: ",cont+1);
        scanf("%d",&idade);
        printf("Informe a altura da %do pessoa: ",cont+1);
        scanf("%f",&alt);
        printf("Informe o peso da %do pessoa: ",cont+1);
        scanf("%f",&peso);
        if(idade>50){
            temp1=temp1+1;
        }
        if(idade>10 && idade<20){
            temp2 = temp2+alt;
            qtd1 = qtd1+1;
        }
        if(peso < 50){
            qtd2 = qtd2+1;
        }
        cont++;
    }
    printf("%d pessoas com mais de 50.\nMedia da altura das pessoas com idade entre 10 e 20: %f\nPercentual de pessoas com peso inferior a 50 quilos: %f",temp1,(temp2/qtd1)*100,(qtd2/N)*100.0);
    return 0;
}

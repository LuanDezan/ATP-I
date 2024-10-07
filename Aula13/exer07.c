//N números aleatórios entre 0 e 5 e relatar sua ocorrência
#include<stdio.h>
#include <stdlib.h>
int main(){
    int N,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
    printf("Informe a quantidade de valores: ");
    scanf("%d",&N);
    int num[N];
    for(int i=0;i<N;i++){
        num[i]= rand() % 6;
    }
    for(int i=0;i<N;i++){
        switch(num[i]){
            case 0:
                d1=d1+1;
                break;
            case 1:
                d2=d2+1;
                break;
            case 2:
                d3=d3+1;
                break;
            case 3:
                d4=d4+1;
                break;
            case 4:
                d5=d5+1;
                break;
            case 5:
                d6=d6+1;
                break;
        }

    }
    printf("D1: %d\nD2: %d\nD3: %d\nD4: %d\nD5: %d\nD6: %d\n",d1,d2,d3,d4,d5,d6);
    return 0;
}

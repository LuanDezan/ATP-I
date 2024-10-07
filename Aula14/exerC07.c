//troque todas as ocorrências L1 pela L2 em uma string
#include<stdio.h>
int main(){
    char L1,L2,str[100];
    int i=0;
    printf("Digite sua string: ");
    fgets(str,100,stdin);
    printf("Digite o L1: ");
    scanf("%c",&L1);
    fflush(stdin);
    printf("Digite o L2: ");
    scanf("%c",&L2);
    while(str[i]!='\0'){
        if(str[i]==L1){
            str[i]=L2;
        }
        i++;
    }
    printf("Nova string: %s",str);
    return 0;
}

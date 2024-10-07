//valores em ordem crescente
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Digite tres valores inteiros: ");
    scanf("%d%d%d", &num1,&num2,&num3);
    if(num1>num2 && num2 > num3){
        printf("%d,%d,%d",num3,num2,num1);
    } else{
        if(num1>num2 && num2<num3 && num1>num3){
            printf("%d,%d,%d",num2,num3,num1);
        } else{
            if(num1>num2 &&  num2<num3 && num1<num3){
                printf("%d,%d,%d", num2,num1,num3);
            } else{
                if(num1<num2 && num2<num3){
                    printf("%d,%d,%d", num1,num2,num3);
                }else{
                    if(num2>num1 && num1>num3){
                        printf("%d,%d,%d", num3,num1,num2);
                    } else{
                        if(num2>num1 && num1<num3 && num2>num3){
                            printf("%d,%d,%d", num1,num3,num2);
                        } else{
                            printf("VALORES IGUAIS OU INVALIDOS");
                        }
                    }
                }
            }
        }
    }
    return 0;
}

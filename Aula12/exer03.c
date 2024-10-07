//menu
#include<stdio.h>
#include<math.h>
int main(){
    double n1,n2,num;
    do{
        printf("Digite dois numeros: ");
        scanf("%lf%lf",&n1,&n2);
        printf("MENU\n1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair\n");
        scanf("%lf",&num);
        if(num==1){
            printf("%f+%f=%f\n",n1,n2,n1+n2);
        }else{
            if(num==2){
                printf("%f-%f=%f\n",n1,n2,n1-n2);
            }else{
                if(num==3){
                    printf("%f*%f=%f\n",n1,n2,n1*n2);
                }else{
                    if(num==4){
                        printf("%f/%f=%f\n",n1,n2,n1/n2);
                    }else{
                        if(num==5){
                            printf("Saindo do programa...");
                        }else{
                            printf("OPCAO INVALIDA\n\n");
                        }
                    }
                }
            }
        }
    }while(num!=5);
    return 0;
}

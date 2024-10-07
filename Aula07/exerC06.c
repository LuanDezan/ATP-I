//verificar data valida
int main(){
    int dia,mes,ano;
    printf("Informe o dia, mes e ano conforme o exemplo: 12 12 2000\n");
    scanf("%d%d%d",&dia,&mes,&ano);
    if(mes>=1 && mes<=12){
        if(ano%400==0 || (ano%4==0 && ano%100!=0)){
            if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes==12) && (dia >=1 && dia <=31)){
                printf("DATA VALIDA");
            } else{
                if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >=1 && dia <=30)){
                    printf("DATA VALIDA");
                } else{
                    if(mes== 2 && (dia>=1 && dia<=29)){
                        printf("DATA VALIDA");
                    } else{
                        printf("DATA INVALIDA");
                    }
                }
            }
        } else{
            if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes==12) && (dia >=1 && dia <=31)){
                printf("DATA VALIDA");
            } else{
                if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >=1 && dia <=30)){
                    printf("DATA VALIDA");
                } else{
                    if(mes== 2 && (dia>=1 && dia<=28)){
                        printf("DATA VALIDA");
                    } else{
                        printf("DATA INVALIDA");
                    }
                }
            }
        }
    }else{
        printf("DATA INVALIDA");
    }
    return 0;
}

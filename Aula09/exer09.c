//quantidade de pessoas para cada cor
#include<stdio.h>
int main(){
    int A=0,P=0,V=0,C=0,O=0,qtd,cont=0,idade;
    char cor;
    printf("Informe a quantidade de pessoas: ");
    scanf("%d",&qtd);
    fflush(stdin);
    while(cont<qtd){
        printf("Informe a idade da %do pessoa: ",cont+1);
        scanf("%d",&idade);
        fflush(stdin);
        printf("Informe a cor dos olhos da %do pessoa(A-Azul,P-Preto,V-Verde,C-Castanho,O-Outro): ",cont+1);
        scanf("%c",&cor);
        switch(cor){
            case 'A':
                A = A+1;
                cont++;
                break;
            case 'P':
                P = P+1;
                cont++;
                break;
            case 'V':
                V = V+1;
                cont++;
                break;
            case 'C':
                C = C+1;
                cont++;
                break;
            case 'O':
                O = O+1;
                cont++;
                break;
            default:
                printf("COR INVALIDA\n");
                break;
        }
    }
    printf("Azul: %d\nPreto: %d\nVerde: %d\nCastanho: %d\nOutro: %d",A,P,V,C,O);
    return 0;
}

//vogal ou consoante switch
#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra;
    printf("Digite uma letra min�scula: ");
    scanf("%c",&letra);
    switch(letra){
        case 'a':case 'e':case 'i':case 'o':case 'u':
            printf("%c � vogal",letra);
            break;
        case 'b':case 'c':case 'd':case 'f':case 'g':case 'h':case 'j':case 'k':case 'l':case 'm':case 'n':case 'p':case 'q':case 'r':case 's':case 't':case 'v':case 'w':case 'x':case 'y':case 'z':
            printf("%c � consoante",letra);
            break;
        default:
            printf("ENTRADA INV�LIDA");
            break;
    }
    return 0;
}

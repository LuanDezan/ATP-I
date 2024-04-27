//tabuada dos números 0 a 10, for aninhados
#include<stdio.h>
int main(){
    for(int tab=0;tab<=10;tab++){
        for(int cont=0;cont<=10;cont++){
            printf("%d*%d=%d\n",tab,cont,tab*cont);
        }
        printf("\n");
    }
    return 0;
}

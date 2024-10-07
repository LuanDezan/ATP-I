//numero harmônico
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double harm=0;
    printf("Digite o valor: ");
    scanf("%d",&n);
    for(double cont=1;cont<=n;cont++){
        harm = harm+(1/cont);
    }
    printf("%lf",harm);
    return 0;
}

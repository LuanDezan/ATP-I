#include <stdio.h>
int main(){
    int seg, min, hr;
    printf("Informe a quantidade de segundos: ");
    scanf("%d", &seg);
    min = seg/60;
    hr = min/60;
    printf("%d horas, %d minutos, %d segundos.", hr, min%60, seg%60);
    return 0;
}

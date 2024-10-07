#include <stdio.h>
int main(){
    float consumo, preco, distancia;
    printf("Informe o consumo do caro em Km/L: ");
    scanf("%f", &consumo);
    printf("Informe o preco do combustivel: ");
    scanf("%f", &preco);
    printf("Informe a distancia a ser percorrida: ");
    scanf("%f", &distancia);
    printf("O custo da viagem foi de %.2f", (distancia/consumo)*preco);
    return 0;
}

//Criar um conversor de moedas, de real pra Dolar
//usar o dolar 3.50

#include <stdio.h>

float conversor(float carteira){
    return carteira / 4.12;
}

int main(void){
    float carteira = 0;
    float resultado = 0;
    printf("Digite quanto você tem na carteira nesse momento: \n");
    scanf("%f",&carteira);

    resultado = conversor(carteira);
    printf("Com %f na carteira você consegue comprar %f dolares.\n",carteira,resultado);

    return 0;
}
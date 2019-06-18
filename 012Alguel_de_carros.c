// Exercício 012: 
// Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e
// a quantidade de dias pelos quais ele foi alugado. Calcule o preço a pagar, 
// sabendo que o carro custa R$60 por dia e R$0,15 por Km rodado.

#include <stdio.h>

double preco_total(int dias, double km){
    int soma_dias = 0;
    double soma_km,valor_total = 0;
    soma_dias = dias * 60;
    soma_km = km * 0.15;
    valor_total = soma_dias + soma_km;
    return valor_total;
}

int main(void){
    int dias,preco_dias = 0;
    double km,preco_km,valor_total_alugado = 0;

    printf("Digite a quantidade de KM percorridos pelo carro: \n");
    scanf("%lf",&km);
    
    printf("Digite a quantidade de dias que o carro ficou alugado: \n");
    scanf("%d",&dias);
       
    valor_total_alugado = preco_total(dias,km);

    printf("o valor total do aluguel é de: %lf\n",valor_total_alugado);

    return 0;
}
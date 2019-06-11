//Exercício 010: 
// Faça um algoritmo que leia o preço de um produto e mostre seu novo preço, 
// com 5% de desconto.

#include <stdio.h>

float desconto(float preco){
    float desconto = (preco * 5) / 100;
    float novo_preco_com_desconto = preco - desconto;
    return novo_preco_com_desconto;
}

int main(void){
    float preco = 0;
    float novo_preco = 0;
    printf("Digite o preco do produto: ");
    scanf("%f",&preco);
    
    novo_preco = desconto(preco);

    printf("O novo preco do produto com um desconto de cinco porcento e: %f",novo_preco);

    return 0;
}
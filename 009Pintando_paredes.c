//Exercício 009: 
// Faça um programa que leia a largura e a altura de uma parede em metros, 
// calcule a sua área e a quantidade de tinta necessária para pintá-la, 
// sabendo que cada litro de tinta pinta uma área de 2 metros quadrados.

#include <stdio.h>

float area(float largura,float altura){
    return (largura * altura) / 2;
}

int main(void){
    float largura = 0;
    float altura = 0;
    float resultado = 0;

    printf("Digite a largura da parede: ");
    scanf("%f",&largura);

    printf("Digite a altura da parede: ");
    scanf("%f",&altura);

    resultado = area(largura,altura);

    printf("Você precisaria de %f Litros de tinta para pintar a sua parede",resultado);

    return 0;
}
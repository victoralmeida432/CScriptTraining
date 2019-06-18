//Exercício 011: 
//Escreva um programa que converta uma temperatura digitando em graus Celsius e converta para graus Fahrenheit.

#include <stdio.h>

float conversor(float temp){
    return ((9*temp)/5)+32;
}

int main(void){
    float temp,nova_temp = 0;
    printf("Digite a temperatura atual em Cº : \n");
    scanf("%f",&temp);

    nova_temp = conversor(temp);

    printf("A temperatura de %f em Fº é de : %f",temp,nova_temp);
    
    return 0;
}
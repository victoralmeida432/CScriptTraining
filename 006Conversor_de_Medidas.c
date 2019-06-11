// Exercício 006: 
// Escreva um programa que leia um valor em metros e
// o exiba convertido em centímetros e milímetros.

#include <stdio.h>

float conversorCM(float valor){
    float valorCM = 0;
    valorCM = valor * 100;
    return valorCM;
}

float conversorMM(float valor){
    return valor * 1000;
}

int main(void){
    float valor,cm,mm = 0;
    printf("Digite um valor em metros para converter em centímetros e milímetros:\n");
    scanf("%f",&valor);

    cm = conversorCM(valor);
    mm = conversorMM(valor);

    printf("%f convertido para CM é: %f\n",valor,cm);
    printf("%f convertido para MM é: %f\n",valor,mm);

    return 0;
}
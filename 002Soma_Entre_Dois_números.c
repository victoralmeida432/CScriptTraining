//Exercício 002: 
//Crie um programa que leia dois números e mostre a soma entre eles.

#include <stdio.h>

int soma(int a,int b){
    return a+b;
}

int main(void){
    int a, b = 0;
    int resultado = 0;
    //int soma = 0;
    printf("Digite o primeiro número que deseja somar: \n");
    scanf("%d",&a);
    printf("Digite o segundo número que deseja somar\n");
    scanf("%d",&b);

    //soma = a + b;

    resultado = soma(a,b);

    printf("O resultado entre %d e %d é: %d\n",a,b,resultado);
    //printf("O resultado entre %d e %d é: %d\n",a,b,soma);


    


    return 0;
}
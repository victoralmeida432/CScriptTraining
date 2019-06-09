// Exercício 001: 
// Faça um programa que leia o nome 
// de uma pessoa e mostre uma mensagem de boas-vindas.

#include <stdio.h>

int main(void){
    char nome[100];
    printf("Qual é o seu nome?\n");
    scanf("%s",nome);
    printf("Olá %s, Seja bem vindo\n",nome);

    return 0;
}
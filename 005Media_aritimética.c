// Exercício 005: 
// Desenvolva um programa que leia as duas 
// notas de um aluno, calcule e mostre a sua média.

#include <stdio.h>

float media(float nota1,float nota2){
    float media_aluno = 0;
    media_aluno = (nota1 + nota2) / 2;
    return media_aluno; 
}

int main(void){
    float nota1 = 0;
    float nota2 = 0;
    float media_final = 0;
    printf("Digite a primeira nota: \n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f",&nota2);

    media_final = media(nota1,nota2);

    printf("A media do aluno é: %f\n",media_final);

    return 0;
}
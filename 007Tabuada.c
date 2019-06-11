//Exercício 007: 
//Faça um programa que leia um número Inteiro qualquer e mostre na tela a sua tabuada.

#include <stdio.h>

int tabuada(int num){
    int x = num;
    for(int i = 0;i <= 10;i++){
        printf("[%d] x [%d] = %d\n",x,i,x*i);
    }
}

int main(void){
    int num = 0;
    int resultado = 0;
    printf("Digtei um número para saber sua tabuada: \n");
    scanf("%d",&num);

    resultado = tabuada(num);

    return 0;
}
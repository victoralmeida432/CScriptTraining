// Exercise 003: 
// Make a program that reads an integer and show on the screen
// its successor and predecessor.

#include <stdio.h>

int sucessor(int num){
    return num + 1; 
}

int antecessor(int num){
    return num - 1;
}

int main(void){

    int num = 0;
    int Sucessor = 0;
    int Antecessor = 0; 
    printf("Digite um número para saber seu sucessor e seu antecessor:\n");
    scanf("%d",&num);

    Sucessor = sucessor(num);
    Antecessor = antecessor(num);

    printf("O sucessor de %d é: %d\n",num,Sucessor);
    printf("O antecessor de %d é: %d\n",num,Antecessor);

    return 0;
}
//Exercício Python 006: 
// Crie um algoritmo que leia um número e 
// mostre o seu dobro, triplo e raiz quadrada.

#include <stdio.h>
#include <math.h>

int Dobro(int num){
    return num * 2;
}

int Triplo(int num){
    return num * 3;
}

float Raiz(int num){
    float raiz = 0;
    raiz = sqrt(num);
    return raiz;
}

int main(void){
    
    int num = 0;
    int dobro,triplo = 0;
    float raiz = 0; 

    printf("Digite um número para saber seu ");
    printf("Dobro,Triplo e sua Raiz: \n");
    scanf("%d",&num);

    dobro = Dobro(num);
    triplo = Triplo(num);
    raiz = Raiz(num);


    printf("O dobro de %d é: %d\n",num,dobro);
    printf("O triplo de %d é: %d\n",num,triplo);
    printf("A raiz de %d é: %f\n",num,raiz);
  
    return 0;
}
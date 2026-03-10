//  Escreva um programa que leia um número inteiro e imprima o seu antecessor e o seu sucessor

#include <stdio.h>
#include <stdlib.h>


int main(){

    int num, ant, suc;

    printf("Escreva um numero: ");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("Numero = %d\nAntecessor = %d\nSucessor = %d", num, ant, suc);

    return 0;
}
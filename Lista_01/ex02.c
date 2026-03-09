// Crie um programa que solicite ao usuário dois números inteiros, calcule a soma entre eles e exiba o resultado

#include <stdio.h>
#include <stdlib.h>

int main () {

    int x, y, soma;

    printf("Escreva o primeiro valor: ");
    scanf("%d", &x);

    printf("Escreva o segundo valor: ");
    scanf("%d", &y);

    soma = x + y;

    printf("A soma de %d + %d = %d.\n", x, y, soma);

    return 0;
}
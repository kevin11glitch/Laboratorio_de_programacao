// Crie um programa que leia três notas de um aluno (pesos 2, 3 e 5, respectivamente). Calcule e exiba a média ponderada final.

#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, media;
    int p1=2, p2=3, p3=5;
    int pesos;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    printf("Nota 3: ");
    scanf("%f", &n3);

    pesos = p1 + p2 + p3;

    media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / pesos;

    printf("A media ponderada entre as notas %.2f, %.2f, %.2f = %.2f\n", n1, n2, n3, media);

    return 0;
}
// Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.
#include <stdio.h>
#include <stdlib.h>

int main(){
    float metros, decimetros, centimetros, milimetros;

    printf("Escreva um valor em metros: ");
    scanf("%f", &metros);


    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("%.2fm representa:\n Decimetros: %.2fdm\n Centimetros: %.2fcm\n Milimetros: %.2fmm.", metros, decimetros, centimetros, milimetros);

    return 0;
}
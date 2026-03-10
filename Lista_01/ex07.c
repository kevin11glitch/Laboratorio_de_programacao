// Escreva um programa que leia um valor inteiro em segundos e o converta para o formato Horas:Minutos:Segundos.

#include <stdio.h>
#include <stdlib.h>


int main(){

    int totalSegundos, segundos, minutos, horas;

    printf("Escreva um tempo em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("Seu resultado é: %d:%d:%d", horas, minutos, segundos);


    return 0;
}
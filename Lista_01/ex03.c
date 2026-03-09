// Desenvolva um programa que leia um número real (float), calcule o seu dobro e exiba o resultado com três casas decimais. 

#include <stdio.h>
#include <stdlib.h>

int main(){

    float num, dobro;
    
    printf("Escreva um numero: ");
    scanf("%f", &num);

    dobro = num * 2;

    printf("O dobro de %.2f = %.3f", num, dobro);


    return 0;
}

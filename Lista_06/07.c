/*
Desenvolva uma função chamada calcular que receba dois números
inteiros e utilize ponteiros para armazenar separadamente:
    a) resultado da soma;
    b) resultado da multiplicação. 
*/

#include <stdio.h>
#include <stdlib.h>

void calcular(int *valor1, int *valor2, int *soma, int *mult){
    *soma = (*valor1) + (*valor2);
    *mult = (*valor1) * (*valor2);

}

int main(){
    int valor1, valor2, soma, mult;

    printf("Digite um numero: ");
    scanf("%d", &valor1);
    printf("Digite outro numero: ");
    scanf("%d", &valor2);

    calcular(&valor1, &valor2, &soma, &mult);

    printf("%d + %d = %d\n", valor1, valor2, soma);
    printf("%d * %d = %d", valor1, valor2, mult);


    
    return 0;
}
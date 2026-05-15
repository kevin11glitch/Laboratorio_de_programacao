// Sabendo que ponteiros permitem manipular diretamente valores armazenados na memória, desenvolva uma função chamada somar que receba os endereços de dois números inteiros e retorne o resultado da soma entre eles. 

#include <stdio.h>
#include <stdlib.h>

void somar(int *num1, int *num2, int *resultado){
    *resultado = (*num1) + (*num2);
}


int main(){
    int num1, num2, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    somar(&num1, &num2, &resultado);

    printf("%d + %d = %d", num1, num2, resultado);
    
    return 0;
}
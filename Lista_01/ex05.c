// Escreva um programa que receba um valor em Reais (BRL) e a cotação atual do Dólar (USD). Exiba quanto o valor em Reais representa em Dólares 

#include <stdio.h>
#include <stdlib.h>

int main(){

    float reais, cotacao, result;

    printf("Digite o valor em real: ");
    scanf("%f", &reais);

    printf("Digite o valor em dolar: ");
    scanf("%f", &cotacao);

    result = reais / cotacao;

    printf("O valor de R$ %.2f em cotacao de %.2f equivale a $ %.2f\n", reais, cotacao, result);
    
    return 0;
}
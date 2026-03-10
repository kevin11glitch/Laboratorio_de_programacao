//Faça um programa que solicita um número decimal e imprime o correspondente em hexa e octal. em c da maneira mais simples possível 

#include <stdio.h>
#include <stdlib.h>


int main(){
    int num;

    printf("Escreva um numero em base decimal: ");
    scanf("%d", &num);

    printf("Decimal: %d\nHexadecimal: %X\nOctal: %o", num, num, num);

    return 0;
}
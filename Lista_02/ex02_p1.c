// Observando a tabela de valores e tamanhos dos tipos inteiros, complie e execute os seguintes programas e explique o resultado.

#include <stdio.h>

int main(void){
    int a = -73538;
    unsigned short int b;
    b = a;
    printf("%d -> %hu\n", a, b);
    return 0;
}

// Explicação: o tipo "int" (32 bits) aceita valores positivos e negativos. O tipo "unsigned short int" (16 bits) aceita apenas valores positivos, com um limite de 0 a 65535. Na conversão, ocorre o truncamento, onde apenas os 16 bits menos significativos de a são preservados em b.
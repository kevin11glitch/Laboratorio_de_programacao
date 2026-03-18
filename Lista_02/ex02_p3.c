// Observando a tabela de valores e tamanhos dos tipos inteiros, complie e execute os seguintes programas e explique o resultado.

#include <stdio.h>

int main(void){
    int a = -896;
    signed char b;
    b = a;
    printf("%d -> %hd\n", a, b);
    return 0;
}

// Explicação: o tipo "int" (32 bits) aceita valores positivos e negativos. O tipo "signed char" (8 bits) também aceita ambos, mas tem um limite de -128 a 127. Na conversão, ocorre o truncamento, onde apenas os 8 bits menos significativos de a são preservados em b.
// Observando a tabela de valores e tamanhos dos tipos inteiros, complie e execute os seguintes programas e explique o resultado.

#include <stdio.h>

int main(void){
    int a = 70000;
    short int b;
    b = a;
    printf("%d -> %hd\n", a, b);
    return 0;
}

// Explicação: o tipo "int" (32 bits) aceita valores positivos e negativos. O tipo "short int" (16 bits) também aceita valores positivos e negativos, mas tem um limite menor comparado ao tipo "int". Na conversão, ocorre o truncamento, onde apenas os 16 bits menos significativos de a são preservados em b.
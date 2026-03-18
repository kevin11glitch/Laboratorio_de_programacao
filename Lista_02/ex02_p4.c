// Observando a tabela de valores e tamanhos dos tipos inteiros, complie e execute os seguintes programas e explique o resultado.

#include <stdio.h>

int main(void){
    double a = 32600.234, b = 40000;
    short int c = a;
    short int d = b;
    printf("%hd -> %hd\n", c, d);
    return 0;
}

// Explicação: no primeiro caso (c = a), ocorre a perda da parte fracionária, pois um tipo inteiro não armazena casas decimais. No segundo caso (d = b), ocorre um estouro de limite (overflow) seguido de truncamento de bits, pois o valor 40000 excede a capacidade máxima do short int (32767). O resultado em d torna-se negativo porque o padrão de bits resultante da conversão afeta o bit de sinal do tipo short.
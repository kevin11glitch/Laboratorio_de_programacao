// O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e escreva um pequeno programa exemplificando o uso deste recurso. 

/*Resposta:
Um ponteiro para função em C é uma variável que, em vez de armazenar o endereço de um dado (como um int ou float), armazena o endereço de memória do código executável de uma função.
*/

#include <stdio.h>
#include <stdlib.h>

void saudar() {
    printf("Ola, Pedro Guilherme Sales Passos.\n");
}

int main(){
    void (*ptr)();
    ptr = saudar;
    ptr(); 

    return 0;
}
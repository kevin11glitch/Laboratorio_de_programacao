// Escreva um programa que contenha duas variáveis de ponteiro do tipo inteiro. Compare seus endereços e exiba o maior endereço. 

#include <stdio.h>
#include <stdlib.h>


int main(){
    int *var1, *var2;

    if(&var1 > &var2){
        printf("O maior endereco eh da var1: %p", &var1);
    }else{
        printf("O maior endereco eh da var2: %p", &var2);
    }

    return 0;
}
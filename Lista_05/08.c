// Fazer um programa que imprime a tabela ASCII (código decimal, código hexa, caracter) para os códigos de 0 a 127.

#include <stdio.h>
#include <stdlib.h>

void ASCII() {
    for (int i = 0; i<=127; i++){
        if (i < 32){
            printf("Caracteres de controle.\n");
        }else{
            printf("Codigo decimal: %d\tcodigo hexa: %x\tcaractere: %c\n", i, i, i);
        }
    }
}

int main(){
    void (*ptr)();
    ptr = ASCII;
    ptr();
    
    return 0;
}
// Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9 

#include <stdio.h>
#include <stdlib.h>

void tabuada() {
    for(int i = 1; i <=9; i++){
        printf("Tabuada do %d:\n", i);
        printf("%d*1 = %d\n", i, i*1);
        printf("%d*2 = %d\n", i, i*2);
        printf("%d*3 = %d\n", i, i*3);
        printf("%d*4 = %d\n", i, i*4);
        printf("%d*5 = %d\n", i, i*5);
        printf("%d*6 = %d\n", i, i*6);
        printf("%d*7 = %d\n", i, i*7);
        printf("%d*8 = %d\n", i, i*8);
        printf("%d*9 = %d\n\n", i, i*9);
    }

}




int main() {
    void (*ptr)();
    ptr = tabuada;
    ptr(); 

    return 0;
}
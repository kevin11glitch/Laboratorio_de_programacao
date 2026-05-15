// Implemente uma função chamada incrementar que receba o endereço de uma variável inteira e aumente seu valor em uma unidade. O programa deverá exibir o valor antes e depois da modificação. 

#include <stdio.h>
#include <stdlib.h>

void incrementar(int *num){
    (*num)++;
}


int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);


    printf("Numero antes de incrementar: %d\n", num);
    incrementar(&num);
    printf("Numero depois de incrementar: %d", num);

    
    return 0;
}

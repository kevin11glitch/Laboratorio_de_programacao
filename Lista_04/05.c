// Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int Dado(){
    srand(time(NULL));
    int faixa = rand()%6+1;
    return faixa;
}

int main(){
    int resultado = Dado();
    printf("%d", resultado);
    return 0;
}
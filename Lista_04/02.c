// Crie uma função que receba um valor e diga se é nulo ou não

#include <stdio.h>
#include <stdlib.h>

void nulo(int x){
    if (x == 0){
        printf("Numero nulo");
    }else{
        printf("Numero nao nulo");
    }
}

int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    nulo(x);
    return 0;
}
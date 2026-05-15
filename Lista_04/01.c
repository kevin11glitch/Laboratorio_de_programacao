// Crie uma função que receba um valor e informe se ele é positivo ou não. 

#include <stdio.h>
#include <stdlib.h>

void positivo(int x){
    if (x > 0){
        printf("Numero positivo");
    }else if(x == 0){
        printf("Numero zero");
    }else{
        printf("Numero negativo");
    }
}

int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);

    positivo(x);

    return 0;
}
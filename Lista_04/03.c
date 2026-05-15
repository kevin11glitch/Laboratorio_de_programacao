// Crie uma função em linguagem C que receba 2 números e retorne o maior valor. 

#include <stdio.h>
#include <stdlib.h>

float maior = 0;

float maior_num(float x, float y){
    if (x > y){
        maior = x;
    }else{
        maior = y;
    }
    return maior;
}

int main(){
    float x, y;
    printf("Digite um numero: ");
    scanf("%f", &x);

    printf("Digite outro numero: ");
    scanf("%f", &y);
    float maior_numero = maior_num(x,y);
    
    printf("Maior numero: %.2f", maior_numero);
    return 0;
}
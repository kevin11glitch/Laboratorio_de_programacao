/* Crie uma função em linguagem C que:
    a. Retorne o menor valor
    b. Retorne o maior valor 
*/ 

#include <stdio.h>
#include <stdlib.h>

float maior, menor;

float maior_num(float x, float y){
    if (x > y){
        maior = x;

    }else{
        maior = y;
    }

    return maior;
}

float menor_num(float x, float y){
    if (x > y){
        menor = y;
    }else{
        menor = x;
    }

    return menor;
}


int main(){
    float x, y;
    printf("Digite um numero: ");
    scanf("%f", &x);

    printf("Digite outro numero: ");
    scanf("%f", &y);

    if (x != y){
        float maior = maior_num(x,y);
        float menor = menor_num(x,y);
        printf("Maior numero: %.2f\nMenor numero: %.2f", maior, menor);
    }else{
        printf("Numeros iguais");
    }
    
    return 0;
}
// Escreva um programa que receba dois "structs" do tipo dma, cada um representando uma data valida, e calcule o numero de dias que decorreram entre as duas datas.

#include <stdio.h>
#include <stdlib.h>

struct dma {
    int dia;
    int mes; 
    int ano;
};

int main(void){

    long resultado1, resultado2, resultatoF;
    
    struct dma data1;
    struct dma data2;

    printf("Escreva dia, mes e ano da primeira data:\n");
    scanf("%d", &data1.dia);
    scanf("%d", &data1.mes);
    scanf("%d", &data1.ano);

    printf("Escreva dia, mes e ano da segunda data:\n");
    scanf("%d", &data2.dia);
    scanf("%d", &data2.mes);
    scanf("%d", &data2.ano);

    resultado1 = (long)(data1.ano * 365) + (data1.mes * 30) + data1.dia;
    resultado2 = (long)(data2.ano * 365) + (data2.mes * 30) + data2.dia;  

    if (resultado1 > resultado2){
        resultatoF = resultado1 - resultado2;
    } else {
        resultatoF = resultado2 - resultado1;
    }

    printf("Decorreram %ld dias entre as duas datas", resultatoF);
    
}


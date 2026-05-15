// Faça uma aplicação em C que peça o valor das 3 notas, mostre como seria a média com essas 3 provas, a média com as 2 notas mais altas, bem como sua nota mais alta e sua nota mais baixa.


#include <stdio.h>
#include <stdlib.h>


float nota_mais_baixa(float nota1, float nota2, float nota3){
    float notas[] = {nota1, nota2, nota3};
    int tamanho = 3;

    float menor = notas[0];

    for(int i=1; i < tamanho; i++){
        if (notas[i] < menor){
            menor = notas[i];
        }
    }

    return menor;
}

float nota_mais_alta(float nota1, float nota2, float nota3){
    float notas[] = {nota1, nota2, nota3};
    int tamanho = 3;

    float maior = notas[0];

    for(int i=1; i < tamanho; i++){
        if (notas[i] > maior){
            maior = notas[i];
        }
    }

    return maior;
}

int main(){
    float nota1, nota2, nota3, soma, media;

    printf("Digite as tres notas do aluno:\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    soma = nota1 + nota2 + nota3;

    printf("A media das 3 notas eh: %.2f\n", soma/3);

    float baixa = nota_mais_baixa(nota1, nota2, nota3);
    float alta = nota_mais_alta(nota1, nota2, nota3);

    media = (soma - baixa) / 2;

    printf("A media das notas sem a nota mais baixa eh: %.2f\n", media);

    printf("A nota mais baixa eh: %.2f.\n", baixa);
    printf("A nota mais alta eh: %.2f.\n", alta);

    return 0;
}
// Um professor, muito legal, fez 3 provas durante um semestre mas só vai levar em conta as duas notas mais altas para calcular a média. 

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

    float baixa = nota_mais_baixa(nota1, nota2, nota3);

    printf("A nota mais baixa eh: %.2f.\n", baixa);

    media = (soma - baixa) / 2;

    printf("A media das notas sem a nota mais baixa eh: %.2f", media);

    return 0;
}
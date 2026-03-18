// Defina uma struct "Pessoa" com campos [nome, idade, telefone]. Em seguida, escreva um programa que leia os dados de uma pessoa e os imprima na tela.

#include <stdio.h>
#include <stdlib.h>

struct Pessoa{
    char *nome, *telefone;
    int idade;
};

int main(void){

    struct Pessoa p1;

    printf("Digite seu nome, idade e telefone:\n");
    scanf(" %[^\n] %d %[^\n]", p1.nome, &p1.idade, p1.telefone);

    printf("Nome: %s\nIdade: %d\nTelefone: %s", p1.nome, p1.idade, p1.telefone);

    return 0;

}
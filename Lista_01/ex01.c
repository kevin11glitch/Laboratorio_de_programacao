// Escreva um programa que imprima o seu nome completo na primeira linha e a sua data de nascimento na segunda linha, utilizando apenas um único comando printf 

#include <stdio.h>
#include <stdlib.h>


int main() {
    char nome[50] = "";
    char nascimento[50] = "";
    
    scanf(" %[^\n]s", nome);
    scanf("%s", nascimento);

    printf("Nome: %s.\nData de nascimento: %s.", nome, nascimento);



    return 0;
}
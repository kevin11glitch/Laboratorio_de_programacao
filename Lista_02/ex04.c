// Defina uma struct "Livro" com os campos [titulo, autor, ano de publicação]. Em seguida, escreva um programa que leia os dados de dois livros e os compare pelo ano de publicação, imprimindo na tel ao livro mais antigo.

#include <stdio.h>
#include <stdlib.h>

struct Livro{
    char *titulo, *autor;
    int ano_publicacao;
};

int main(void){

    struct Livro livro1;
    struct Livro livro2;

    printf("Escreva o titulo, nome do autor e ano de publicacao do livro 1:\n");
    scanf(" %[^\n]", livro1.titulo);
    scanf(" %[^\n]", livro1.autor);
    scanf("%d", &livro1.ano_publicacao);

    printf("Escreva o titulo, nome do autor e ano de publicacao do livro 2:\n");
    scanf(" %[^\n]", livro2.titulo);
    scanf(" %[^\n]", livro2.autor);
    scanf("%d", &livro2.ano_publicacao);

    if (livro1.ano_publicacao < livro2.ano_publicacao){
        printf("O livro mais antigo eh: '%s', lancado no ano de %d", livro1.titulo, livro1.ano_publicacao);
    } else{
        printf("O livro mais antigo eh: '%s', lancado no ano de %d", livro2.titulo, livro2.ano_publicacao);
    };

    return 0;
    
}
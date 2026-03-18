// Compile os programas e verifique se há erros. Corrijá-os se necessário

#include <stdio.h>

/* Programa 03:
int main(void){
    struct exem{
        int a;
        char b;
    } aux, cod; // variáveis iniciadas sem valores

    struct exem taxa; // variável "taxa" sem uso
    aux = cod;
    taxa = cod; // struct sem nome, compliador entende que não é da mesma família

    //sem chamadas das variáveis

    return 0;
}
*/

// Correção:
int main(void){
    struct exem {
        int a;
        char b;
    };

    struct exem cod = {10, 'A'}; 
    struct exem aux;
    struct exem taxa;

    aux = cod;
    taxa = cod;

    printf("Taxa: %d, %c\n", taxa.a, taxa.b);
    printf("Aux: %d, %c\n", aux.a, aux.b);

    return 0;
}
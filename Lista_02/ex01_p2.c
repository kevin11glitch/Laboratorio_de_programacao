// Compile os programas e verifique se há erros. Corrijá-os se necessário

#include <stdio.h>

/* Programa 02:
int main(void){
    // structs definidas em blocos separados
    struct { //Struct definida sem nome 
        int a;
        char b;
    } aux, cod; // variáveis iniciadas sem valores

    struct { //Struct definida sem nome 
        int a;
        char b;
    } taxa; // variáveis iniciadas sem valores

    // nenhuma chamada da struct

    aux = cod;
    taxa = cod; // struct sem nome, compliador entende que não é da mesma família

    //sem chamadas das variáveis

    return 0;
}
*/


// Correção:
int main(void){
    struct Exemplo{ 
        int a;
        char b;
    };

    struct Exemplo cod = {10, 'A'}; 
    struct Exemplo aux;
    struct Exemplo taxa;

    aux = cod;
    taxa = cod; 

    printf("Taxa: %d, %c\n", taxa.a, taxa.b);
    printf("Aux: %d, %c\n", aux.a, aux.b);

    return 0;
}
// Compile os programas e verifique se há erros. Corrijá-os se necessário

#include <stdio.h>


/* Programa 01:
struct { //struct definida sem nome
    int valor; 
    static char sexo; // Não é possível usar "static" dentro de uma estruct
    double taxa = 2.3; // Não é possivel ter uma variável com valor dentro do struct
};

int main(void){
    // Nenhuma chamada da struct
    return 0;
}
*/

// Correção:
struct Registro{
    int valor; 
    char sexo;
    double taxa; 
};

int main(void){
    struct Registro reg1;

    return 0;
}
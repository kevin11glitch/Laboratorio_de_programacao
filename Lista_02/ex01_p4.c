// Compile os programas e verifique se há erros. Corrijá-os se necessário

#include <stdio.h>

/* Programa 04:
union { //Union sem nome
    int valor;
    static char sexo; // Não é possível usar "static" dentro de uma union
    double taxa = 2.3; // Não é possível atribuir valores a variaveis dentro da union
};

int main(void){
    return 0;
}
*/

//Correção:
union Dados{ 
    int valor;
    char sexo; 
    double taxa;
};

int main(void){
    union Dados d;

    d.taxa = 2.3;

    printf("Taxa: %.1f\n", d.taxa);
    
    return 0;
}
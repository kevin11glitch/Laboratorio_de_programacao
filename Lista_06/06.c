// Deseja-se alterar diretamente o conteúdo de uma variável utilizando ponteiros. Para isso, desenvolva uma função chamada zerar responsável que modifique o valor de uma variável inteira para 0. 

#include <stdio.h>
#include <stdlib.h>

void zerar(int *valor){
    *valor = 0;
}

int main(){
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    printf("Valor = %d\n", valor);
    zerar(&valor);
    printf("Novo valor = %d", valor);

    
    return 0;
}

// Dado um número inteiro informado pelo usuário, desenvolva uma função chamada dobrar capaz de alterar o valor original da variável para o dobro utilizando ponteiros. Ao final, exiba o valor atualizado na função principal. 

#include <stdio.h>
#include <stdlib.h>

void dobrar(int *num){
    *num = *num * 2;
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    dobrar(&num);

    printf("O valor dobrado eh: %d\n", num);
    
    return 0;
}
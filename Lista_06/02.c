// Considerando duas variáveis inteiras lidas pelo teclado, implemente uma função chamada trocar que realize a troca dos valores entre as variáveis utilizando passagem por referência. 

#include <stdio.h>
#include <stdlib.h>

void trocar(int *num1, int *num2){
    int aux = *num1;

    *num1 = *num2;
    *num2 = aux;

}


int main(){
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    trocar(&num1, &num2);

    printf("Apos a troca, numero 1 = %d e numero 2 = %d\n", num1, num2);
    
    return 0;
}

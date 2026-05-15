// Utilizando ponteiros e funções, implemente uma solução capaz de verificar se um número inteiro é par ou ímpar. Se a função é par deverá retornar 1 caso o número seja par e 0 caso seja ímpar. 

#include <stdio.h>
#include <stdlib.h>

void paridade(int *num, int *result){
    if (*num % 2 == 0){
        *result = 1;
    } else{
        *result = 0;
    }

}

int main(){
    int num, result;

    printf("Informe um numero: ");
    scanf("%d", &num);

    paridade(&num, &result);

    if (result == 1){
        printf("O numero %d eh par", num);
    }else{
        printf("O numero %d eh impar", num);
    }


    
    return 0;
}

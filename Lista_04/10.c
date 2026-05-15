// Programe um aplicativo em C que recebe dois inteiros e retorna o MDC, máximo divisor comum. 

#include <stdio.h>
#include <stdlib.h>

int MDC(int a, int b){
    if(b == 0){
        return a;
    }else{
        return MDC(b, (a%b));
    }
}


int main(){
    int num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    resultado = MDC(num1, num2);

    printf("O MDC de %d e %d eh: %d", num1, num2, resultado);

    return 0;
}
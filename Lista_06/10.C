// Deseja-se construir uma calculadora simples utilizando ponteiro para função. O usuário deverá informar dois números reais e uma operação matemática (+, -, * ou /). O programa deverá selecionar a função correspondente à operação escolhida e exibir o resultado final. 

#include <stdio.h>
#include <stdlib.h>

void calculadora(int *num1, int *num2, int *operacao, float *result){
    if (*operacao == 0){
        *result = (*num1) + (*num2);
    }else if(*operacao == 1){
        *result = (*num1) - (*num2);
    }else if(*operacao == 2){
        *result = (*num1) * (*num2);
    }else if(*operacao == 3){
        *result = (*num1) / (*num2);
    }else{
        printf("Digite uma operacao entre as listadas.");
    }
}

int main(){
    int num1, num2, operacao;
    float result;
    ;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("Informe uma operacao (0: +, 1: -, 2: *, 3: /): ");
    scanf("%d", &operacao);

    calculadora(&num1, &num2, &operacao, &result);

    if (operacao == 0){
        printf("%d + %d = %d", num1, num2, (int)result);
    }else if(operacao == 1){
        printf("%d - %d = %d", num1, num2, (int)result);
    }else if(operacao == 2){
        printf("%d * %d = %d", num1, num2, (int)result);
    }else if(operacao == 3){
        printf("%d / %d = %.2f", num1, num2, result);
    }

    
    
    return 0;
}



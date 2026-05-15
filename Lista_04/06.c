/*
Crie um aplicativo de conversão entre as temperaturas Celsius e Farenheit. Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou Farenheit, depois a conversão escolhida é realizada através de um comando SWITCH. Se C é a temperatura em Célsius e F em farenheit, as fórmulas de conversão são:
    C= 5.(F-32)/9
    F= (9.C/5) + 32 
*/

#include <stdio.h>
#include <stdlib.h>


float Celsius(float temperatura){
    return 5 * (temperatura - 32) / 9;
}

float Fahrenheit(float temperatura){
    return (9 * temperatura / 5) + 32;
}


int main(){
    char opcao;
    printf("Escolha o tipo de temperatura inicial:\nF -> Fahrenheit\nC -> Celsius\n");
    scanf("%c", &opcao);
    float temperatura, resultado;

    while(opcao != 'S'){
        switch (opcao){
        case 'C':
            printf("Digite a temperatura em graus Celsius: ");
            scanf("%f", &temperatura);
            resultado = Fahrenheit(temperatura);
            printf("A conversao de %.2f graus Celsius para graus Fahrenheit eh: %.2f", temperatura, resultado);
            break;

        case 'F':
            printf("Digite a temperatura em graus Fahrenheit: ");
            scanf("%f", &temperatura);
            resultado = Celsius(temperatura);
            printf("A conversao de %.2f graus Fahrenheit para graus Celsius eh: %.2f", temperatura, resultado);
            break;
        
        default:
            printf("Escolha uma opcao correta:\nF -> (fahrenheit)\nC -> (celsius)\nS -> (Sair)\n");
            break;
        }

        printf("\nEscolha uma nova opcao (F, C ou S para sair): ");
        scanf(" %c", &opcao);
    }
    

    return 0;
}
// Uma temperatura em Celsius será informada pelo usuário. Implemente uma função chamada converter que receba esse valor e utilize ponteiros para armazenar a temperatura equivalente em Fahrenheit. 

#include <stdio.h>
#include <stdlib.h>

void converter(float *celsius, float *fahrenheit){
    *fahrenheit = ((*celsius) * 1.8) + 32;
}

int main(){
    float celsius, fahrenheit;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    converter(&celsius, &fahrenheit);

    printf("%.2f graus Celsius eh igual a %.2f graus Fahrenheit", celsius, fahrenheit);

    
    return 0;
}
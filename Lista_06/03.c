// Elabore um programa em que o usuário informe dois números inteiros. Em seguida, utilize uma função chamada maior que receba ponteiros para essas variáveis e determine qual dos dois valores é o maior. 


#include <stdio.h>
#include <stdlib.h>


void maior_que(int *num1, int *num2, int *maior_num){

    if (*num1 > *num2){
        *maior_num = *num1;
    }else{
        *maior_num = *num2;
    }
}


int main(){
    int num1, num2, maior_num;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    maior_que(&num1, &num2, &maior_num);

    printf("O maior numero eh: %d", maior_num);
    
    return 0;
}
// Um vendedor recebe um salário fixo mais 15% de comissão sobre suas vendas. Escreva um programa que leia o nome do vendedor, o salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Calcule e imprima o salário total que o vendedor receberá no final do mês. Além disso, o programa deve mostrar quanto sobraria do salário se houvesse um desconto de 8% de imposto sobre o valor total recebido.


#include <stdio.h>
#include <stdlib.h>


int main(){

    char nome[50];
    float salario_fixo, total_vendas, salario_total, salario_desconto;

    printf("Escreva o nome do vendedor, seu salario e a quantidade por ele vendida esse mes (em dinheiro): \n");
    scanf("%s %f %f", nome, &salario_fixo, &total_vendas);

    salario_total = salario_fixo + (total_vendas * 0.15);

    salario_desconto = salario_total - (salario_total * 0.08);

    printf("O salario total de %s, com 15%% de %.2f, eh de: R$ %.2f.\n", nome, total_vendas, salario_total);

    printf("Caso houvesse um desconto de 8%% no salario total, sobraria: R$ %.2f", salario_desconto);

    return 0;
}
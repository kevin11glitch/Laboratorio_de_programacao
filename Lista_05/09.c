// Fazer uma função que calcula o fatorial de um número. Implementar uma versão recursiva e uma versão com laço. 

#include <stdio.h>
#include <stdlib.h>

int fatorial_laco(int n) {
    int resultado = 1;

    for(; n != 0; n--){
        resultado *= n;
    }

    return resultado;
}

int fatorial_recursao(int n){
    if (n == 0 || n == 1){
        return 1;
    }else{
        return n * fatorial_recursao(n - 1);
    }
}


int main() {
    int n, escolha;
    int (*ptr_fatorial)(int);

    printf("Digite o numero: ");
    scanf("%d", &n);
    printf("Escolha: Fatorial com recursao (1), Fatorial com laco (2): ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        ptr_fatorial = fatorial_recursao;
    } else {
        ptr_fatorial = fatorial_laco;
    }
    printf("O resultado eh: %d\n", ptr_fatorial(n));

    return 0;
}
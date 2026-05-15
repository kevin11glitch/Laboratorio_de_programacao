// Programe um aplicativo em C que acha todos os números primos até 1000

#include <stdio.h>
#include <stdlib.h>


void primos(int limite){    
    for(int i = 2; i <= limite; i++){
        int eh_primo = 1;
        for(int j = 2; j*j <= i; j++){
            if (i%j == 0){
                eh_primo = 0;
                break;
            }
        }
        if(eh_primo){
            printf("%d, ", i);
        }
    }
    printf("\n");
}

int main(){
    primos(1000);

    return 0;
}
/* Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os 
números que foram digitados. */

#include <stdio.h>

int main() {
    int num, cont = 0, aux, totalprimos = 0;

    for( int i= 1; i <= 10; i++){
        printf("\nDigite o %dº número:\n", i);
        scanf("%d", &num);
    
        aux = num;
        cont = 0;
        while(aux >= 1){
            if(num%aux == 0){
                cont++;
            }
        aux --;
    }   
 
    if(cont == 2){
        totalprimos++;
    }
    }
    printf("\nDos números digitados %d são primos.\n", totalprimos);

    return 0;
}
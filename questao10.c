/*Faça um programa que receba dez números, calcule 
números primos. 
mostre a soma dos números pares e a soma dos números ímpares.
*/

#include <stdio.h>
int main (){
    int num, totalpares= 0, totalprimos = 0;
    int aux;
    int cont;

    for(int i = 1; i <= 10; i++){
        printf("\nDigite o %dª número: \n",i);
        scanf("%d", &num);

            if (num%2 == 0){
                totalpares += num;
            }

        aux = num;
        cont = 0;
        while(aux >= 1){
            if(num%aux == 0){
                cont++;
            }
        aux --;
    }   
 
    if(cont == 2){
        totalprimos += num;
    }
}
    printf("\nSoma dos números Pares: %d\n", totalpares);
    printf("\nSoma dos números Primos: %d\n", totalprimos);


    return 0;
}
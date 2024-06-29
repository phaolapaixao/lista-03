/*Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. 
Finalize digitando idade igual a zero. 
*/
#include <stdio.h>

int main(){

    int idade, i = 1, somaidade = 0, total_idade = 0;

    printf("\nDigite 0 para encerrar o programa.\n");

        while(i <= 100){
            printf("\nDigite a %dª idade:\n", i);
            scanf("%d", &idade);

            if(idade == 0){
                break;
            }
            somaidade+=idade;
            total_idade++;

        i++;
        
    }
    printf("\nA média das idades digitadas é:\n%d",somaidade / total_idade);

    return 0;

}
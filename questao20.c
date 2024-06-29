/*Faça um programa que apresente o menu de opções a seguir: 
Menu de opções: 
1. Média aritmética 
2. Média ponderada 
3. Sair 
Digite a opção desejada. 
Na opção 1: receber duas notas, calcular e mostrar a média aritmética. 
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada. 
Na opção 3: sair do programa. 
Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.*/
#include <stdio.h>

int main(){

   int opcoes;
   float nota;
   int peso1 = 2, peso2 = 3, peso3 = 4;
   int totalPeso = peso1 + peso2 + peso3;
   float somamediaAritimetica = 0, somamediaPonderada = 0, soma = 0;

        printf("\nMenu Opções:\n");

        printf("\n1. Média aritmética\n");
        printf("\n2. Média poderada\n");
        printf("\n3. sair\n");

        
            while(opcoes != 3){
        
        printf("\nQual a opção desejada?\n");
        scanf("%d", &opcoes);

        if(opcoes == 1){
            for(int i = 1; i <= 2; i++){
                printf("\nDigite a %dª nota:\n", i);
                scanf("%f", &nota);
                somamediaAritimetica+=nota;
            }
            printf("\nA média aritmética é: %.2f\n", somamediaAritimetica / 2);
        }

        if(opcoes == 2){
            for(int j = 1; j <= 3; j++){
                printf("\nDigite a %dª nota:\n", j);
                scanf("%f", &nota);
                    if(j == 1){
                        soma += nota * peso1;
                    }
                    else if (j == 2){
                        soma += nota * peso2;
                    }
                    else if (j == 3){
                        soma += nota * peso3;
                    }   
        }
        somamediaPonderada = soma / totalPeso;
        printf("\nA média ponderada é: %.2f\n",somamediaPonderada);
        }
 }
        printf("\nPrograma Finalizado\n");
        

    return 0;

}
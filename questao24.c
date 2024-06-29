/*Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o 
menor valor do conjunto. Considere que: 
para encerrar a entrada de dados, deve ser digitado o valor zero; 
para valores negativos, deve ser enviada uma mensagem; 
os valores negativos ou iguais a zero não entrarão nos cálculos.*/
#include <stdio.h>

int main(){

    int var, menorvalor, maiorvalor, aux = 1;

    printf("\nDigite um conjunto de valores inteiros e positivos\n");

    for (int p = 0; ; p++){

    
    scanf("%d",&var );


        if(var <= 0){
            break;
        }
        else{
            printf("\nos valores negativos ou iguais a zero não entrarão nos cálculos.\n");
        }

        if(aux){
            menorvalor = maiorvalor = var;
            aux = 0;
        } else {
            if(var < menorvalor){
                menorvalor = var;
            }
            if(var > maiorvalor){
                maiorvalor = var;
            }
        }
    }

    printf("\nEntrada de dados encerrado.\n");
    printf("\nO menor valor é %d e a o maior valor é %d", menorvalor, maiorvalor);

    return 0;
}
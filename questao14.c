/*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião 
em relação ao filme: ótimo - 3; bom -2; regular — 1. 
Faça um programa que receba a idade e a opi- nião de quinze espectadores, calcule e mostre: 
a média das idades das pessoas que responderam ótimo; 
a quantidade de pessoas que responderam regular; e 
a percentagem de pessoas que responderam bom, entre todos os espectadores analisados. 
*/
#include <stdio.h>

int main(){

    int opiniao;
    int idade, somaidade = 0, quant_idade = 0, quant_regular = 0, quant_bom = 0, total  = 0;

        for (int i = 1; i <= 15; i++){
            printf("\nQual a sua idade:\n");
            scanf("%d", &idade);
            printf("\nQual é a sua opinião?\nDigite:\nÓtimo - 3\nBom - 2\nRegular - 1\n");
            scanf("%d", &opiniao);

            total++;

                if(opiniao == 3){
                   somaidade+=idade;
                   quant_idade++;
                }
                else if(opiniao == 1){
                    quant_regular++;
                }
                else if(opiniao == 2){
                    quant_bom++;
                }
            
        }
        printf("\nA média da idade das pessoas que responderam ótimo é: %d\n", somaidade / quant_idade);
        printf("\nA quantidade de pessoas que responderam ótimo é: %d\n", quant_regular);
        printf("\nA porcentagem de pessoas que responderam bom é: %.2f%%\n", ((float)quant_bom / total) * 100);


    return 0;
}

/* Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas 
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero. 
*/
#include <stdio.h>

int main(){

    int idade;
    float altura;
    float somaaltura = 0, totalaltura = 0;

    printf("\nPara encerrar a entrada de dados, digite idade menor ou igual a zero.\n");

    for (int i = 1; ; i++){
        printf("\nDigite a %dª idade:\n",i);
        scanf("%d", &idade);
            if(idade <= 0){
                break;
            }

        printf("\nDigite a altura:\n");
        scanf("%f",&altura);

                if (idade >= 50){
                    somaaltura+=altura;
                    totalaltura++;
                }
    }
    printf("\nPrograma Finalizado.\n");
    printf("\nA média das alturas de pessoas com mais de 50 anos é: %.2f", somaaltura / totalaltura);

    return 0;
}
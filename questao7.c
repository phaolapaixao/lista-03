/*7. Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre: 
a quantidade de pessoas com idade superior a 50 anos; 
a média das alturas das pessoas com idade entre 10 e 20 anos; 
a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas. */
#include <stdio.h>
int main(){
    int idade, quant = 0;
    int a = 0;
    float peso, altura, somaaltura = 0, somapeso = 0;

    printf("\nDigite a idade, altura e o peso de cinco pessoas:\n");

         for (int i = 1; i <= 5; i++){
             printf("Digite a idade da %dº pessoa: ", i);
             scanf("%d", &idade);

             printf("Digite sua altura: ");
             scanf("%f",&altura);

             printf("Digite seu peso: ");
             scanf("%f", &peso);

           if(idade > 50){
                quant++;
            }
            if(idade > 10 && idade < 20){
                somaaltura+=altura;
                a++;
            }
            if(peso < 40){
                somapeso+=peso;
            } 
    }
        if(a > 0) {
            printf("\nA quantidade de pessoas com idade maior que 50 são: %d\n",quant);
            printf("\nA média das alturas de pessoas entre 10 e 20 anos é: %.2f\n",somaaltura/a);
        }
        else {
            printf("\nNão tem pessoas com idade entre 10 e 20 anos.\n");
        } 
        if(somapeso > 0) {
            printf("\nA porcentagem de pessoas com peso inferior a 40 kg é: %.2f%%\n",somapeso / 100);
        } else {
            printf("\nNão possui pessoas com peso inferior a 40 kg.\n");
        }


    return 0;
    
}
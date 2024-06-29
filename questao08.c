/*8. Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — 
preto; V — verde; e C― castanho) e a cor dos cabelos (P — preto; C — castanho; L― louro; e R — ruivo)
de seis pessoas, e que calcule e mostre: 
a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg; 
a média das idades das pessoas com altura inferior a 1,50 m; 
a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e 
a quantidade de pessoas ruivas e que não possuem olhos azuis. */
#include<stdio.h>

int main () {

    int idade, somaidade = 0, contador_ip = 0, contador_idade= 0, total_olhos = 0, olhosAzuis= 0, cabR_olhA= 0, totalRuivos= 0; 
    float peso, altura;
    char olhos, cabelo;

    for (int i = 1; i <= 6; i++){
            printf("\nDigite a idade da %d° pessoa:\n",i);
            scanf("%d", &idade);
                    printf("\nDigite o peso da %d° pessoa:\n",i);
                    scanf("%f", &peso);
                        printf("\nDigite a altura da %d° pessoa:\n",i);
                        scanf("%f", &altura);
                            printf("\nQual a cor do olhos da %d° pessoa? \nDigite:\nA - azul\nP - pretos\nV - verde\nC - castanhos\n",i);
                            scanf(" %c", &olhos);
                                printf("\nQual a cor do cabelo da %d° pessoa? \nDigite:\nP - pretos\nC - castanhos\nL - Louro\nR - ruívo\n",i);
                                scanf(" %c", &cabelo); 

            if (idade > 50 && peso < 60) {
                contador_ip++;
            }
                if (altura < 1.50){
                    somaidade+=idade;
                    contador_idade++;
                }

                    total_olhos++;

                     if (olhos == 'A' || olhos == 'a'){
                          olhosAzuis++; 
                     }
                            if(cabelo == 'R' || cabelo == 'r'){
                                totalRuivos++;
                            }
                            if ((cabelo == 'R' || cabelo == 'r') && (olhos == 'A'|| olhos =='a')) {
                                     cabR_olhA++;
                            }
    }

    printf("\nA quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg é: %d\n", contador_ip);

    if(contador_idade > 0){
         printf("\nA média das idades das pessoas com altura inferior a 1,50 m é: %.4d\n", somaidade/ contador_idade );
    }else {
         printf("\n Não há pessoas com altura inferior a 1,50 m");
    }
    if(olhosAzuis > 0){
        printf("\nA porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas é: %.2f%%\n", ((double)olhosAzuis / total_olhos) * 100 );
    }else
        printf("Não tem nenhuma pessoa com olhos azuis");

    printf("\nA quantidade de pessoas ruivas e que não possuem olhos azuis é: %d\n", totalRuivos - cabR_olhA);
            
  return 0;  
}
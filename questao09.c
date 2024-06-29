/* Faça um programa que receba dez idades, pesos e alturas, calcule e mostre: 
a média das idades das dez pessoas; 
a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e 
a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m. 
*/
#include<stdio.h>

int main (){
    int idade, somaidade = 0, quantidade = 0, pesoaltura = 0, idadealtura = 0;
    float peso, altura;

printf("\nDigite a idade, peso e altura de 10 pessoas:\n");

for (int i= 1; i <= 8; i++) {
    printf("\nDigite a idade da %d° pessoa:\n",i);
    scanf("%d", &idade);
    printf("\nDigite o peso da %d° pessoa:\n",i);
    scanf("%f", &peso);
    printf("\nDigite a altura da %d° pessoa:\n",i);
    scanf("%f", &altura);
     

    somaidade+=idade;
    quantidade++;

        if(peso > 50 && altura < 1.50){
            pesoaltura++;
        }
        if(idade > 10 && idade < 30 && altura > 1.90){
            idadealtura++;
        }
    
}
   if(quantidade > 0){
        printf("\nA média da idade das dez pessoas é: %.2f\n ",(float)somaidade / quantidade);
    }else {
        printf("\nNenhuma idade resgistrada.\n");
    }
    printf("\nA quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro é :%d\n ",pesoaltura);
    printf("\nA porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m é: %.2f%%\n",((float)idadealtura/quantidade) * 100);

    return 0;
}
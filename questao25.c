/*Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais, 
conforme a tabela a seguir: 
 
Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido,
 e que calcule e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa
  deverá mostrar o total investido e o total de juros pagos. 
A leitura terminará quando o código do cliente digitado for menor ou igual a 0*/

#include <stdio.h>

int main(){

  int cod, investimento;
  float valor, valorinvestimento = 0, juros = 0;

  for (int i = 0; ; i++){
  printf("\nDigite seu código:\n");
  scanf("%d",&cod);

    if(cod <= 0){
      break;
    }

  printf("\nDigite o tipo de investimento.\nOpções\n1.Poupaça\n2.Poupaça Plus\n3.Fundos de renda fixa\n");
  scanf("%d",&investimento);

  printf("\nQual o valor investido?\n");
  scanf("%f",&valor);

  valorinvestimento+=valor;

  
    if(investimento == 1){
       valor = valor * 0.015;
       printf("\nSeu redimento é R$; %2.f", valor);
    }
    else if(investimento == 2){
       valor = valor * 0.02;
       printf("\nSeu redimento é R$; %2.f", valor);
    }
    else if(investimento == 3){
       valor = valor * 0.04;
       printf("\nSeu redimento é R$; %2.f", valor);

    }else if (investimento > 3){
      printf("\nTipo de investimento invalido. Tente Novamente.\n");
    }

    juros+=valor;
    
  }

  printf("\nPrograma Finalizado.\n");
  printf("\nO valor total investido é R$ %.2f",valorinvestimento);
  printf("\nTotal de juros pagos: R$ %.2f\n", juros);

  return 0;

}
/*Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores, 
o preço de compra e o preço de venda de cada ação e que calcule e mostre: 
o lucro de cada ação comercializada; 
a quantidade de ações com lucro superior a R$ 1.000,00; 
a quantidade de ações com lucro inferior a R$ 200,00; 
lucro total da empresa. 
Finalize com o tipo de ação 'F. 
*/
#include <stdio.h>
int main(){
    char bolsadeValores;
    float valorCompra, valorVenda, lucro;
    int lucroMaiorA1000 = 0, lucroInferiorA200 = 0, lucroTotal = 0;

    printf("\nFinalize com o tipo de ação F\n");

    for (int i = 0; ; i++){
        printf("\nQual o tipo de ação?\n");
        scanf(" %c",&bolsadeValores);
            if(bolsadeValores == 'F' || bolsadeValores == 'f'){
                break;
            }


        printf("\nQual o valor da compra?\n");
        scanf("%f",&valorCompra);

        printf("\nQual o valor da venda?\n");
        scanf("%f", &valorVenda);

        lucro = valorVenda - valorCompra;

        if(bolsadeValores){
                printf("\nLucro: %.2f R$", lucro);
            }

        if(lucro > 1000){
            lucroMaiorA1000++;
        }

        if(lucro < 200){
            lucroInferiorA200++;
        }
     
        lucroTotal+=lucro;

    }
    printf("\nFIM\n");
    printf("\nA quantidade de ações com lucro superior a R$ 1.000,00; %d\n", lucroMaiorA1000);
    printf("\nA quantidade de ações com lucro inferior a R$ 200,00: %d\n", lucroInferiorA200);
    printf("\nO lucro total da empresa é: %d\n", lucroTotal);

    return 0;
}
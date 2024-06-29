/*Uma loja utiliza o código V para transação à vista e P para transação a prazo. 
Faça um programa que receba 
o código e o valor de quinze transações, calcule e mostre: 
o valor total das compras à vista; 
o valor total das compras a prazo; 
o valor total das compras efetuadas; e 
o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. 
*/
#include <stdio.h>
int main(){
    char cod;
    int tr, totalV = 0, totalP = 0; 


    for(int i = 0; i <4; i++){
        printf("\nDigite V para transação à vista e P para transação à prazo.\n");
        scanf(" %c",&cod);
        printf("\nDigite o valor: \n");
        scanf("%d",&tr);
    
        if( cod == 'V'){
             totalV += tr;
        }
        else if(cod == 'P'){
             totalP += tr;
        }
    }        
         printf("\nValor total de compras a vista: %dR$\n", totalV);
         printf("\nValor total de compras a prazo: %dR$\n", totalP);
         printf("\nO valor total das commpras efetuadas é: %.2dR$\n", totalV + totalP);

         totalP = totalP / 3;
         printf("\nO valor das primeiras prestação juntas:%dR$\n", totalP);

return 0;
}
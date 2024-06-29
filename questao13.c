/*Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias 
dos pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, 
de 21 a 30 anos e de 31 anos para cima. 
*/

#include <stdio.h>

int main (){
    int idade, quantpesoum = 0,quantpesodois= 0,quantpesotres = 0,quantpesoquatro = 0;
    float peso, somapesofaixaum = 0.0,somapesodois = 0.0,somapesotres= 0.0,somapesoquatro = 0.0;

        for (int i = 1; i <= 15; i++){
            printf("\nDigite a idade da %dª pessoa:\n",i);
            scanf("%d", &idade);
            printf("\nDigite a peso da %dª pessoa:\n", i);
            scanf("%f", &peso);

                if(idade >=  1 && idade < 10){
                    somapesofaixaum+=peso;
                    quantpesoum++;
                }
                else if(idade >= 11 && idade < 20){
                    somapesodois+=peso;
                    quantpesodois++;
                }
                else if(idade >= 21 && idade < 30){
                    somapesotres+=peso;
                    quantpesotres++;
                }
                else if(idade > 31){
                    somapesoquatro+=peso;
                    quantpesoquatro++;

                }
        }
        printf("\nMédia da primeira faixa etária:\n %.2f",somapesofaixaum / quantpesoum);
        printf("\nMédia da segunda faixa etária:\n %.2f",somapesodois / quantpesodois);
        printf("\nMédia da terceira faixa etária:\n %.2f",somapesotres/ quantpesotres);
        printf("\nMédia da quarta faixa etária:\n %.2f",somapesoquatro / quantpesoquatro);
  
    

    return 0;
}
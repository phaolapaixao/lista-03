/*Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço 
final, quantidade de parcelas e valor da parcela. Considere o seguinte: 
o preço final para compra à vista tem desconto de 20%; 
a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e 
os percentuais de acréscimo encontram-se na tabela a seguir. 
*/
#include <stdio.h>

int main(){

    float valor, valorTV, valorTP, valorParcela;
    char pagamento;
    int parcelamento;
    
    printf("\nDigite o valor do automovel:\n");
    scanf("%f", &valor);

    printf("\nVocê deseja pagar à vista ou parcelado? \nDigite:\nV- à vista\nP- Parcelado\n\n");
    scanf(" %c", &pagamento);

        if(pagamento == 'P' || pagamento == 'p'){
            printf("\nQual a forma de parcelamento?\nDisponível:\n6\n12\n18\n24\n30\n36\n42\n48\n54\n60\n\n");
            scanf("%d", &parcelamento);

                if(parcelamento == 6){
                    valorTP = valor * 0.03;
                    valorTP = valorTP + valor;
                    valorParcela = valorTP / 6;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
            }
                else if(parcelamento == 12){
                    valorTP = valor * 0.12;
                    valorTP = valorTP + valor;
                    valorParcela = valorTP / 12;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
            }
                else if(parcelamento == 18){
                   valorTP = valor * 0.18;
                   valorTP = valorTP + valor;
                   valorParcela = valorTP / 18;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
                   
            }
                else if(parcelamento == 24){
                   valorTP = valor * 0.24;
                   valorTP = valorTP + valor;
                   valorParcela = valorTP / 24;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
            }
                else if(parcelamento == 30){
                   valorTP = valor * 0.30;
                   valorTP = valorTP + valor;
                   valorParcela = valorTP / 30;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
            }
                else if(parcelamento == 36){
                   valorTP = valor * 0.36;
                   valorTP = valorTP + valor;
                   valorParcela = valorTP / 36;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
            }
                else if(parcelamento == 42){
                   valorTP = valor * 0.42;
                   valorTP = valorTP + valor;
                   valorParcela = valorTP / 42;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
            }
                else if(parcelamento == 48){
                    valorTP = valor * 0.48;
                    valorTP = valorTP + valor;
                    valorParcela = valorTP / 48;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
            }
                else if(parcelamento == 54){
                  valorTP =  valor * 0.54;
                  valorTP = valorTP + valor;
                  valorParcela = valorTP / 54;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
            }
                else if(parcelamento == 60){
                   valorTP = valor * 0.60;
                   valorTP = valorTP + valor;
                   valorParcela = valorTP / 60;
                        printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
                        printf("\n%.2f\t\t\t seis parcela\t\t\t %.2f\n", valorTP, valorParcela);
            }
        }
        

        if(pagamento == 'v' || pagamento == 'V'){
            valorTV = valor - 0.2;
            printf("\nPreço Final \t\t Quantidade de parcelas\t\t Valor da Parcela\n");
            printf("\n%.2f\t\t\t uma parcela\t\t\t %.2f\n", valorTV, valorTV);
        }

    
    
    return 0;
}


/* Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. 
Os códigos utilizados são: 
1, 2, 3, 4 Votos para os respectivos candidatos 
5 Voto nulo 
6 Voto em branco 

Faça um programa que 
calcule e mostre: 
o total de votos para cada candidato; 
o total de votos nulos; 
o total de votos em branco; 
a porcentagem de votos nulos sobre o total de votos; e 
a porcentagem de votos em branco sobre o total de votos. 
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá 
mostrar uma mensagem. 
*/
#include <stdio.h>

int main(){

    int cod;
    int totalcod1 = 0, totalcod2 = 0, totalcod3 = 0, totalcod4 = 0, totalcod5 = 0, totalcod6 = 0, totalvotos = 0;

    printf("\nDigite 0 para encerrar o programa.\n");

    for(int i = 1; ;i++){

        printf("\nDigite o código do cadido desejado.\nOpções:\n 1\n 2\n 3\n 4\n\n");
        scanf(" %d", &cod);
            if(cod == 0){
                break;
            }
            if(cod == 5){
                printf("\nVoto Nulo.\n");
                totalcod5++;
            }
            else if(cod == 6){
                printf("\nVoto em branco.\n");
                totalcod6++;
            }
            if(cod >=1 && cod <=4){
               if(cod == 1){
                    totalcod1++;
            }
            else if(cod == 2){
                    totalcod2++;
            }
            else if(cod == 3){
                   totalcod3++;
            }
            else if(cod == 4){
                    totalcod4++;
            } 
            }
            else {
                printf("\nCódigo invalido.\n");
            }
            totalvotos++;
        }
    
    printf("\nPrograna Finalizado.\n");
    printf("\nTotal Votos 1: %d\nTotal Votos 2: %d\nTotal Votos 3: %d\nTotal Votos 4: %d\nTotal Votos 5: %d\nTotal Votos 6: %d\n",totalcod1,totalcod2,totalcod3,totalcod4,totalcod5,totalcod6);
    printf("\nA porcentagem de votos nulos sobre o total de votos: %2.f%%\n", (totalcod5 / (float)totalvotos) * 100);
    printf("\nA porcentagem de votos brancos sobre o total de votos: %2.f%%\n", (totalcod6 / (float)totalvotos) * 100);
    return 0;
}


/*3. Faça um programa que receba a idade de oito pessoas, calcule e mostre: 
a) a quantidade de pessoas em cada faixa etária; 
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas. 
c) a porcentagem de pessoas na última faixa etária com relação ao total de 
pessoas 
FAIXA ETÁRIA 
IDADE 
1a 
Até 15 anos 
2a 
De 16 a 30 anos 
3a 
De 31 a 45 anos 
4a 
De 46 a 60 anos 
5a i
*/

#include <stdio.h>

int main(){
    int idade;
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;
    int total = 0;
    float porcentagem;

 
    printf("Digite a idade de oito pessoas: ");

    for(int i= 1; i <= 8; i++){
    printf("\n%dº pessoa: ",i);
    scanf("%d", &idade);
    
        if(idade <= 15) {
            faixa1++;
        }
        else if(idade > 15 && idade <=30){
            faixa2++;
        }
        else if(idade > 30 && idade <= 45){
            faixa3++;
        }
        else if(idade > 46 && idade <= 60){
            faixa4++;
        }
        else {
            faixa5++;
        }
        total++;
    }

            printf("\nQuantidade de pessoas em cada faixa étaria: \n");
            printf("\nfaixa étaria 1: %d pessoas\n", faixa1);
            printf("\nfaixa étaria 2: %d pessoas\n", faixa2);
            printf("\nfaixa étaria 3: %d pessoas\n", faixa3);
            printf("\nfaixa étaria 4: %d pessoas\n", faixa4);
            printf("\nfaixa étaria 5: %d pessoas\n", faixa5);
           
            
           
printf("\nPocentagem de pessoas da primeira faixa étaria com relação ao total de pessoas:\n");
porcentagem = ((float)faixa1 * total/ 100) * 100;
printf("\n%.2f por cento\n", porcentagem);

printf("\nPocentagem de pessoas da útima faixa étaria com relação ao total de pessoas:\n");
porcentagem =((float)faixa5 * total/ 100) * 100;
printf("\n%.2f po cento\n",porcentagem);

return 0;
}
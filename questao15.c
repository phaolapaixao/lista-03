/* Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo 
pro- duto lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S—sim; ou N-não).
 Sabe-se que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre: 
o número de pessoas que responderam sim; 
o número de pessoas que responderam não; 
o número de mulheres que responderam sim; e 
a percentagem de homens que responderam não, entre todos os homens analisados. */

#include <stdio.h>

int main(){

    char sexo, resposta;
    int sim = 0, nao = 0, s = 0, n = 0, homens = 0;

    for(int i = 1; i <= 10; i++){
        printf("Qual os sexo do %dº entrevistado?\nDigite:\nF-Feminino\nM-Masculino\n", i);
        scanf(" %c",&sexo);
        printf("Qual a opinião do entrevistado?\nDigite:\nS—sim\nN-não\n", i);
        scanf(" %c",&resposta);

            if(resposta == 'S' || resposta == 's'){
                sim++;
            }
            if(resposta == 'N' || resposta == 'n'){
                nao++;
            }
            if(sexo == 'F' || sexo == 'f'){
                s++;
            }
            if (sexo == 'M' || sexo == 'm'){
                if(sexo == 'M' || sexo == 'm'){
                n++;
                homens++;
            }
    }
    }
    printf("\n%d pessoas responderam sim\n",sim);
    printf("\n%d pessoas responderam não\n",nao);
    printf("\n%d mulheres responderam sim\n",s);


    printf("\nA percentagem de homens que responderam não, entre todos os homens analisados. %d%%\n", (n / homens) * 100);
    
    return 0;

}
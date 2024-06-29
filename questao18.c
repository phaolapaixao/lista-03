/* Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, 
sexo (M/F) e salário. Faça um programa que calcule e mostre: 
a média dos salários do grupo; 
a maior e a menor idade do grupo; 
a quantidade de mulheres com salário até R$ 200,00; 
a idade e o sexo da pessoa que possui o menor salário. 
Finalize a entrada de dados ao ser digitada uma idade negativa. 
*/
#include <stdio.h>

int main(){
    int idade, maioridade, menoridade, entrada = 1, entradasalario = 1, menorsalario, idademenorsalario;
    char sexo, sexomenorsalario;
    float salario;
    int somasalario = 0, quantsalario = 0, quantmulheres = 0;

    printf("\nPara encerrar o programa digite uma idade negativa.\n");

    for(int i = 1; ;i++){
        printf("\nDigite a %dº idade; ",i);
        scanf("%d",&idade);

            if(idade < 0){
                break;
            }
             if (entrada) {
            maioridade = idade;
            menoridade = idade;
            entrada = 0;
            
            } else {
            if (idade > maioridade) {
                maioridade = idade;
            }
            if (idade < menoridade) {
                menoridade = idade;
            }

            }


            printf("\nQual o sexo?\nDigite:\nM-Masculino\nF-Feminino.\n\n");
            scanf(" %c",&sexo);

            printf("\nDigite o salário:\n");
            scanf("%f",&salario);

            if(sexo == 'F' || sexo == 'f') {
                if(salario <= 200){
                quantmulheres++;
                }
            }
            if(entradasalario){
                menorsalario = salario;
                sexomenorsalario = sexo;
                idademenorsalario = idade;
                entrada = 0;
            } else {
            if (salario > menorsalario) {
                menorsalario = salario;
                sexomenorsalario = sexo;
                idademenorsalario = idade;
            }
            
        }

        somasalario+=salario;
        quantsalario++;

    }

    printf("\nPrograma finalizado.\n");
        if(quantsalario > 0){
        printf("\nA média dos salários do grupo é: %.2fR$\n", somasalario / (float)quantsalario);
        printf("\nA maior idade do grupo é: %d\n", maioridade);
        printf("\nA menor idade do grupo é: %d\n", menoridade);
        printf("\nA quantidade de mulheres com salário até R$ 200,00 é: %d\n", quantmulheres);
        printf("\nM idade e o sexo da pessoa que possui o menor salário: %c\n%d\n",sexomenorsalario, idademenorsalario);
        }
    return 0;
}
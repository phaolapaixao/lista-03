/*Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
 dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que 
 estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa 
 casa não entrava na pesquisa. Faça um programa que:

leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo); e 
calcule e mostre a porcentagem de audiência de cada canal. 
Para encerrar a entrada de dados, digite o número do canal ZERO.*/
#include <stdio.h>

int main(){

    int numpessoas, canal;
    int canal4= 0, canal5= 0, canal7= 0, canal12= 0, total = 0, somapessoas = 0;

    printf("\nPara encerrar a entrada de dados, digite o número do canal ZERO\n");

    for (int i = 0; ; i++){
        printf("\nQual o número de canal?\nOpções:\n4\n5\n7\n12\n\n");
        scanf("%d",&canal);
            if(canal == 0){
                break;
            }
        printf("\nQuantas pessoas estão assistindo?\n\n");
        scanf("%d",&numpessoas);

        total++;
        somapessoas+=numpessoas;

        if(canal == 4){
            canal4+=numpessoas;
        }  
        if(canal == 5){
            canal5+=numpessoas;
        }  
        if(canal == 7){
            canal7+=numpessoas;
        }
        if(canal == 12){
            canal12+=numpessoas;
        }       
           
    }
    printf("\nFim\n");
    printf("\ntotal de pessoas que assistem canal 4\n%d",canal4);
    printf("\nSoma total das pessoas:\n%d",somapessoas);
    printf("\nvezes digitadas\n%d",total);

    printf("\nA porcentagem de pessoas que assistem o canal 4 é: %.2f%%\n", (canal4 / (float)somapessoas) * 100);
    printf("\nA porcentagem de pessoas que assistem o canal 5 é: %.2f%%\n", (canal5 / (float)somapessoas) * 100);
    printf("\nA porcentagem de pessoas que assistem o canal 7 é: %.2f%%\n", (canal7 / (float)somapessoas) * 100);
    printf("\nA porcentagem de pessoas que assistem o canal 12 é: %.2f%%\n",(canal12 /(float)somapessoas) * 100);
    

    return 0;
}
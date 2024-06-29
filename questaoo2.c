#include <stdio.h>
int main (){
    float valor = 5.00;
    int quant = 120;
    int lucro;
    
    printf("\nTabela de Lucros:\n");

    printf("\nPreço \t\tValor \t\tLucro\n");

    for(int i=0; i <= 9; i++){
        printf("\n%.2fR$",valor);
        printf("\t\t%.2d\t",quant);
             valor = valor - 0.5;
             quant = quant + 26;
             lucro = (quant * valor)-200;
        printf("\t%.2dR$", lucro);
    }

    return 0;
}
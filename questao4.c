/*Faça um programa que receba um número, calcule e mostre a tabuada desse número. 
Exemplo: 
Digite um número: 5 
*/
#include<stdio.h>
int main (){
    int num;

    printf("\nDigite um número: \n");

    scanf("%d", &num);

    for(int i = 0; i <= 10; i++){
    
    printf("%d x %d = %d\n", num, i, num * i);
        
    }

    return 0;
}
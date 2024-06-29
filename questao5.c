/*Faça um programa que mostre as tabuadas dos números de 1 a 10.*/

#include<stdio.h>
int main (){
    int num;

    printf("\nTabuada dos números 1 a 10: \n");

    

        for(num = 1; num <=10; num++){
        printf("\nTabuada do numero:  %d\n", num);
        

        for(int i = 0; i <= 10; i++){
        printf("\n%d x %d = %d\n", num, i, num * i);
        
    }
        }

    return 0;
}
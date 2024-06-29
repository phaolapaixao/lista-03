#include <stdio.h>
/*/*1. Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em segui- 
da, organize-os em ordem crescente e decrescente. */
int main() {
    int a, b, c, d;
    int aux;
    
    for(int g= 1; g <= 5; g++ ){
        printf("\nDigite o grupo %d: \n", g );
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);

        printf("\nOrdem lida:\n");
        

        printf("\nGrupo %d: \n", g );
        printf("%.2d\n", a);
        printf("%.2d\n", b);
        printf("%.2d\n", c);
        printf("%.2d\n", d);


            if(a > b){
                aux = a;
                a = b;
                b = aux;
            }
            if(a > c){
                aux = a;
                a = c;
                c = aux;
            }
            if(a > d){
                aux = a;
                a = d;
                d = aux;
            }
            if(b > c) {
                aux = b;
                b = c;
                c = aux;
            }
            if(b > d){
                aux = b;
                b = d;
                d = aux;
            }
            if(c > d){
                aux = c;
                c = d;
                d = aux;
            }
          
            printf("\nOrdem Crescente\n");
            printf("%.2d\n", a);
            printf("%.2d\n", b);
            printf("%.2d\n", c);
            printf("%.2d\n", d);
        
            if(a < b){
                aux = a;
                a = b;
                b = aux;
            }
            if(a < c){
                aux = a;
                a = c;
                c = aux;
            }
            if(a < d){
                aux = a;
                a = d;
                d = aux;
            }
            if(b < c) {
                aux = b;
                b = c;
                c = aux;
            }
            if(b < d){
                aux = b;
                b = d;
                d = aux;
            }
            if(c < d){
                aux = c;
                c = d;
                d = aux;
            }
            printf("\nOrdem Decrescente\n");
            printf("%.2d\n", a);
            printf("%.2d\n", b);
            printf("%.2d\n", c);
            printf("%.2d\n", d);
    
    }
       /*printf("\nOrdem lida:\n");
        
        for(int g= 1; g <= 5; g++ ){
        printf("\nGrupo %d: \n", g );
        printf("%.2d\n", a);
        printf("%.2d\n", b);
        printf("%.2d\n", c);
        printf("%.2d\n", d);
        
        }
    
        
            for(int g = 1; g <= 5; g++){
            printf("\nOrdem Crescente\n");
            printf("%d\n", a);
            printf("%d\n", b);
            printf("%d\n", c);
            printf("%d\n", d);
            }
*/
    
    return 0;
}
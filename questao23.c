#include <stdio.h>

int main(){

    for(int i = 0; ; i++){
    

    float salario, novoSalario, valorFerias, decimoTerceiro;
    int opcao, meses;

    printf("\n\nMenu de opções:\n\n1. Novo salário \n2. Férias \n3. Décimo terceiro\n4. Sair \n\nDigite a opção desejada.\n");
    scanf("%d",&opcao);

        if(opcao == 4){
            break;
        }

    if(opcao == 1){
        printf("\nDigite seu salário. R$ ");
        scanf("%f",&salario);
        
        if(salario >= 210 && salario <=600){
            novoSalario = 200 * 0.10;
            printf("\nSeu salário agora é R$ %.2f.\n",salario + novoSalario);
        }
        else if(salario <= 200){
            novoSalario = 200 * 0.15;
            printf("\nSeu salário agora é R$ %.2f.\n",salario + novoSalario);
        }
        else if(salario >= 600){
            novoSalario = 200 * 0.05;
            printf("\nSeu salário agora é R$ %.2f.\n",salario + novoSalario);
        }
    }

    if(opcao == 2){
        printf("\nDigite seu salário. R$\n");
        scanf("%f",&salario);
        if(salario <= 200){
        valorFerias = salario * 1/3;
        printf("\nO valor de suas férias é de R$ %.2f.\n",valorFerias + salario);
        }

        else if(salario <= 210 && salario <= 600){
        valorFerias = salario * 1/3;
        printf("\nO valor de suas férias é de R$ %.2f.\n",valorFerias + salario);
        }

        else if(salario > 600){
        valorFerias = salario * 1/3;
        printf("\nO valor de suas férias é de R$ %.2f.\n",valorFerias + salario);
        }
    }

    if(opcao == 3){
        printf("\nDigite seu salário. R$");
        scanf("%f",&salario);

        printf("\nHá quantos meses você trabalha nessa empresa?\n");
        scanf("%d",&meses);
        if(meses <= 12){
            if(salario <= 200){
                if(meses == 1){
                    decimoTerceiro = (salario * 1) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                else if(meses == 2){
                    decimoTerceiro = (salario * 2) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                 else if(meses == 3){
                    decimoTerceiro = (salario * 3) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                 else if(meses == 4){
                    decimoTerceiro = (salario * 4) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                else if(meses == 5){
                    decimoTerceiro = (salario * 5) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                else if(meses == 6){
                    decimoTerceiro = (salario * 6) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                else if(meses == 7){
                    decimoTerceiro = (salario * 7) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                else if(meses == 8){
                    decimoTerceiro = (salario * 8) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                else if(meses == 9){
                    decimoTerceiro = (salario * 10) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                else if(meses == 10){
                    decimoTerceiro = (salario * 2) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                else if(meses == 11){
                    decimoTerceiro = (salario * 2) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                else if(meses == 12){
                    decimoTerceiro = (salario * 2) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
            }


                if(salario <= 210 && salario <= 600){
                if(meses == 1){
                    decimoTerceiro = (salario * 1) / 12;
                    printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 2){
                        decimoTerceiro = (salario * 2) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 3){
                        decimoTerceiro = (salario * 3) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 4){
                        decimoTerceiro = (salario * 4) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 5){
                        decimoTerceiro = (salario * 5) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 6){
                        decimoTerceiro = (salario * 6) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 7){
                        decimoTerceiro = (salario * 7) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 8){
                        decimoTerceiro = (salario * 8) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 9){
                        decimoTerceiro = (salario * 10) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 10){
                        decimoTerceiro = (salario * 2) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 11){
                        decimoTerceiro = (salario * 2) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 12){
                        decimoTerceiro = (salario * 2) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                }
            


                if(salario >= 600){
                    if(meses == 1){
                        decimoTerceiro = (salario * 1) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 2){
                        decimoTerceiro = (salario * 2) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 3){
                        decimoTerceiro = (salario * 3) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 4){
                        decimoTerceiro = (salario * 4) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 5){
                        decimoTerceiro = (salario * 5) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 6){
                        decimoTerceiro = (salario * 6) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 7){
                        decimoTerceiro = (salario * 7) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 8){
                        decimoTerceiro = (salario * 8) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 9){
                        decimoTerceiro = (salario * 10) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 10){
                        decimoTerceiro = (salario * 2) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 11){
                        decimoTerceiro = (salario * 2) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
                    else if(meses == 12){
                        decimoTerceiro = (salario * 2) / 12;
                        printf("\nSeu décimo terceiro é R$ %.f", decimoTerceiro);
                }
            }
            

        }else{
            printf("\nATENÇÃO! só deve ser inserido no máximo 12 meses.\n");
        }
    }
    }
    printf("\nVocẽ saiu do programa.\n");

    return 0;
}
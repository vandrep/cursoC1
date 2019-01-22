#include <stdio.h>

int main(){
    double num1 num2;
    int operacao;
    printf("***************\n");
    printf("* Calculadora *\n");
    printf("***************\n");
    printf("Digite o primeiro número: ");
    scanf("%f", num1);
    printf("\n1 = soma, 2 = subtração, 3 = divisão, 4 = multiplicação");
    printf("Digite a operação: ");
    scanf("%d", operacao);
    printf("\nDigite o segundo número: ");
    scanf("%f", num2);
    printf("O resultado é:");
    if(operacao ==1){
        printf("%f", num1 + num2);
    }
    else if(operacao == 2){
        printf("%f", num1 - num2);
    }
    else if(operacao == 3){
        printf("%f", num1 / num2);
    }
    else if(operacao == 4){
        printf("%f", num1 * num2);
    }
    return 0;
}
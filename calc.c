#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
    SetConsoleOutputCP(65001);
    double num1, num2;
    int operacao;
    printf("***************\n");
    printf("* Calculadora *\n");
    printf("***************\n");
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("\n1 = soma, 2 = subtração, 3 = divisão, 4 = multiplicação");
    printf("Digite a operação: ");
    scanf("%d", &operacao);
    printf("\nDigite o segundo número: ");
    scanf("%lf", &num2);
    printf("O resultado é:");
    if(operacao ==1){
        printf("%.1f", num1 + num2);
    }
    else if(operacao == 2){
        printf("%.1f", num1 - num2);
    }
    else if(operacao == 3){
        printf("%.1f", num1 / num2);
    }
    else if(operacao == 4){
        printf("%.1f", num1 * num2);
    }
    return 0;
}
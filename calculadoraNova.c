#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);

    double num1;
    double num2;
    double resultado;
    int operacao;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("\nDigite o segundo número: ");
    scanf("%lf", &num2);

    printf("\n1 = soma, 2 = subtração, 3 = divisão, 4 = multiplicação");
    printf("\nDigite a operação: ");
    scanf("%d", &operacao);

    printf("\nResultado: ");
    
    if (operacao == 1)
    {
        printf("%.1f", num1 + num2);
    }
    else if (operacao == 2)
    {
        printf("%.1f", num1 - num2);
    }
    else if (operacao == 3)
    {
        printf("%.1f", num1 / num2);
    }
    else if (operacao == 4)
    {
        printf("%.1f", num1 * num2);
    }
    else
    {
        printf("Operação inválida!");
    }
    return 0;
}
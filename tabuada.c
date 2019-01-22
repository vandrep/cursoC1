#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número para a tabuada: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%dx%d=%d", num, i, num * i);
    }
}
#include <stdio.h>
#include <windows.h>
#include <locale.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);

	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numeroSecreto = 42;

	int chute;

	for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
		printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		int acertou = chute == numeroSecreto;

		if (acertou) {
			printf("Parabéns, você acertou!\n");
			break;
		} else {
			if (chute > numeroSecreto) {
				printf("O seu chute é maior que o número secreto.\n");
			} else {
				printf("O seu chute é menor que o número secreto.\n");
			}
		}
	}
	printf("Fim de Jogo!\n");
}

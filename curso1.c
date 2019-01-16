#include <stdio.h>

int main() {
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numeroSecreto = 42;

	int chute;

	for (int i = 1; i <= 3; i++) {
		printf("Tentativa %d de 3\n", i);
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

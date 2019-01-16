#include <stdio.h>

int main() {
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numeroSecreto = 42;

	int chute;

	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

	if (chute == numeroSecreto) {
		printf("Parabéns, você acertou!\n");
	} else {
		if (chute > numeroSecreto) {
			printf("O seu chute é maior que o número secreto.\n");
		} else {
			printf("O seu chute é menor que o número secreto.\n");
		}
	}
}

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, soma, n3, subtracao;
	
	printf("Calcular a soma de 2 n�meros e subtrair um 3� valor do resultado:\n");
	
	printf("Primeiro n�mero:");
	scanf("%f", &n1);
	
	printf("Segundo n�mero:");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	
	printf("O valor da soma � %.2f \n", soma);
	
	printf("Terceiro n�mero:");
	scanf("%f", &n3);
	
	subtracao = soma - n3;
	
	printf("O valor da subtra��o � %.2f", subtracao);
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, n3, n4, produto;
	
	printf("Calcular o produto entre os 4 n�meros:\n");
	
	printf("Primeiro n�mero:");
	scanf("%f", &n1);
	
	printf("Segundo n�mero:");
	scanf("%f", &n2);
	
	printf("Terceiro n�mero:");
	scanf("%f", &n3);
	
	printf("Quarto n�mero:");
	scanf("%f", &n4);
	
	produto = n1*n2*n3*n4;
	
	printf("O valor do produto entre os 4 n�meros � %.2f", produto);
	return 0;
}

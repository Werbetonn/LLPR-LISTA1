#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, media;
	
	printf("Calcular a m�dia de 2 notas:\n");
	
	printf("Primeira nota:");
	scanf("%f", &n1);
	
	printf("Segunda nota:");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	printf("O valor calculado da m�dia � %.2f", media);
	return 0;
}


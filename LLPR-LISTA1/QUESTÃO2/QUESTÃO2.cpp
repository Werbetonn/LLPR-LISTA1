#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, n3, media;
	
	printf("Calcular a m�dia de 3 notas:\n");
	
	printf("Primeira nota:");
	scanf("%f", &n1);
	
	printf("Segunda nota:");
	scanf("%f", &n2);
	
	printf("Terceira nota:");
	scanf("%f", &n3);
	
	media = n1+n2+n3/3;
	
	printf("O valor calculado da m�dia entre os %f, %f e %f foi: %f", n1, n2, n3, media);
	return 0;
}

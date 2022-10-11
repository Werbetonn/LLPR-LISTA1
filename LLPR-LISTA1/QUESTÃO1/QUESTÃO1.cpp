#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, n3, media;
	
	printf("Programa para calcular a média:\n");
	
	printf("Digite a primeira nota:");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota:");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota:");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3)/3;
	
	printf("O valor calculado da media entre os números %f, %f e %f foi: %f", n1, n2, n3, media);
	
	return 0;	
}

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int n1, n2, resto;
	
	float quociente;
	
	printf("Calcular o quociente e resto de 2 n�meros:\n");
	
	printf("Primeiro n�mero:");
	scanf("%d", &n1);
	
	printf("Segundo n�mero:");
	scanf("%d", &n2);
	
	quociente = (float) n1/n2;
	resto = n1%n2;
	
	printf("O valor calculado do quociente � %.2f e o resto � %d", quociente, resto);
	return 0;
}

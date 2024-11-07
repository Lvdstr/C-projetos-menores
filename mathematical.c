#include <stdio.h>

struct numeros{
	int number;
	int acresimo;
	int valor;
	int desconto;
};

void acresimo()
{
	struct numeros nums;
	nums.number;
	nums.acresimo;

	printf("acrescimo de porcentagem em um valor\n");
	printf("digite um numero: ");
	scanf("%d", &nums.number);

	printf("digite um valor de acrescimo agora: ");
	scanf("%d", &nums.acresimo);

	float porcentagem = 1 + nums.acresimo / 100.0;
	float resultado = nums.number * porcentagem;
	printf("Resultado: %.2f\n", resultado);
};

void calcular_desconto()
{
	struct numeros nums;
	nums.valor;
	nums.desconto;

	printf("calcule um valor com desconto\n");

	printf("informe um valor:");
	scanf("%d", &nums.valor);

	printf("agora a porcentagem de desconto:");
	scanf("%d", &nums.desconto);

	int resultado = nums.valor - (nums.valor * nums.desconto / 100);

	printf("\n%d por cento de %d é: %d",nums.desconto, nums.valor, resultado);
};

int main()
{
	//acresimo();
	calcular_desconto();
	return 0;
}

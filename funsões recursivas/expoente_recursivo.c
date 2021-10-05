/*bibliotecas*/
#include <stdio.h>

/*variáveis globais*/
int base, expoente;

/*corpo do programa*/
int expoenteando(base, expoente)
{
	if (expoente == 1)
	{
		return base;
	}
	if (expoente == 0)
	{
		return 1;
	}
	return base * expoenteando(base, expoente-1);
}

int main()
{
	printf("LIMITE: 10^11\n\n");
	printf("digite o valor da base: ");
	scanf("%i", &base);
	
	printf("digite o valor do expoente: ");
	scanf("%i", &expoente);
	
	printf("Resultado: %i", expoenteando(base, expoente));
	
	return 0;
}

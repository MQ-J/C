/* BIBLIOTECAS */
#include <stdio.h>
#include <stdlib.h>


/* VARIÁVEIS */
int *vetor;
int linha, coluna;


/* MENU PRINCIPAL */
void menu()
{
	//variáveis
	char op;
	
	//numero de linhas e colunas
	system("cls");
	printf("MATRIZ\n");
	printf("numero de linhas: ");
	fflush(stdin); /*limpa buffer do teclado*/
	scanf("%i", &linha);
	
	//numero de colunas
	printf("numero de colunas: ");
	fflush(stdin); /*limpa buffer do teclado*/
	scanf("%i", &coluna);
	
	//finaliza
	printf("total de numeros: %i",(linha * coluna));
	printf("\nconfirmar? [s = sim] [n = nao]");
	fflush(stdin); /*limpa buffer do teclado*/
	scanf("%c", &op);
	if(op != 's') menu();
}


/* CORPO DO PROGRAMA*/
int main()
{
	//variáveis
	int i, c, a;
	c=-1;
	
	//programa de menu principal
	menu();
	
	//malloc do vetor 2D
	vetor = (int*)malloc((linha * coluna) * sizeof(int));
	
	//preenchendo vetor
	for(i=0; i<(linha*coluna); i++)
	{
		system("cls");
		printf("PREENCHENDO MATRIZ\n");
		printf("Digite o numero %i/%i: ", i+1, (linha * coluna));
		fflush(stdin); /*limpa buffer do teclado*/
		scanf("%i", &vetor[i]);
	}
	
	//mostrando na tela vetor em forma de matriz
	system("cls");
	printf("MOSTRANDO MATRIZ\n");
	for(i=1; i<=linha; i++)
	{
		for(a=1; a<=coluna; a++)
		{
		c++;
		printf("\t%i", vetor[c]);
		}
		printf("\n");
	}
	
	//mostrando vetor normal
	printf("\n\nMOSTRANDO COMO ESTA NA MEMORIA:\n");
	for(i=0; i<(linha*coluna); i++) printf("%i", vetor[i]);
	printf("\n");
	
	//pausa programa
	system("pause");
	
	//libera vetor
	free(vetor);
	
	return(0);
}

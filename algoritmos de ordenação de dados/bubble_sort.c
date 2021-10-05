#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 11

int main()
{
	/*variáveis*/
	int vetor[TAMANHO_VETOR];
	int aux;
	int i, j;
	
	/*preenche vetor*/
	for ( i = 0; i<TAMANHO_VETOR-1; i++)
	{
		system("cls");
		printf("Digite o %i/%i valor: ", i+1, TAMANHO_VETOR-1);
		fflush(stdin);
		scanf("%i", &vetor[i]);	
	}
	
	/*mostra vetor na tela*/
	for ( i = 0; i<TAMANHO_VETOR-1; i++) printf("\n%i", vetor[i]);
	
	/*bubble sort*/
	for ( j = 0; j<TAMANHO_VETOR-1; j++) 
	{
		for ( i = 0; i<TAMANHO_VETOR-1-j; i++) 
    	{
	    	if ( vetor[i] > vetor[i+1])
	    	{;
		        aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1]  = aux;
	    	}
    	}
   	}
   	
   	/*mostra vetor organizado na tela*/
   	printf("\n--------------------\n\n");
	for ( i = 0; i<TAMANHO_VETOR-1; i++) printf("\n%i: %i", i+1, vetor[i]);
	
	return(0);
}

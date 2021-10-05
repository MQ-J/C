/*bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#define max 20

/*variáveis globais*/
int vet[max];
int quant;
int i;

/*quick_sort*/
int quick_sort(int vet[max], int ini, int fim)
{
	//variáveis locais (eu reaproveitei o i)
	int pivo, aux, j;
	
	//caso o vetor só tenha um numero a função não roda
	if(ini < fim)
	{
	
		//definição das variáveis
		pivo = fim;
		i    = ini;
		j    = fim;
		
		while(i<j)
		{
			//analisa os numeros do vetor, guardando o que tem que trocar
			while(vet[i] <= vet[pivo] && i < fim)
			i++;
			while(vet[j] > vet[pivo])
			j--;
			
			//troca o que tem q trocar
			if(i<j)
			{
				aux    = vet[i];
				vet[i] = vet[j];
				vet[j] =  aux  ;
			}
		}
		//quando acaba as trocas, muda o pivo
		aux       = vet[pivo];
		vet[pivo] =   vet[i] ;
		vet[i]    =    aux   ;
		
		//refaz a função nos dois lados do vetor
		quick_sort(vet, ini, i-1);
		quick_sort(vet, i+1, fim);
	}
}


/*corpo do programa*/
int main()
{
	//define tamanho do vetor
	printf("digite quantos numeros ordenar [maximo de %i]\n", max);
	fflush(stdin); scanf("%i", &quant);
	if(quant > max) main();
	
	//preenche vetor
	for (i=0; i<quant; i++)
	{
		printf("Digite o %i/%i numero: ", i+1, quant);
		fflush(stdin); scanf("%i", &vet[i]);
	}
	
	//faz a organização
	quick_sort(vet, 0, quant-1);
	
	//mostra vetor organizado
	printf("\n================\n");
	printf("vetor organizado:\n");
	for (i=0; i<quant; i++)
	{
		printf("%i\n", vet[i]);
	}
	
	return (0);
}

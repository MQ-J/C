/*bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*definições*/
#define nome_max 30

/*estruturas*/
typedef struct
{
	char nome[nome_max + 1];
	char celular[9+1];
}
registro;

/*corpo do programa*/
int main()
{
	//variáveis locais
	registro * contato;
	FILE * arq;
	int quant, i;
	
	//menu
	printf("Contatos\n");
	printf("Digite quantos contatos cadastrar: ");
	fflush(stdin); scanf("%i", &quant);
	
	//abre arquivo e faz malloc da estrutura 
	arq = fopen("contatos.dat", "wb");
	contato = (registro*) malloc(sizeof(registro) * quant);
	
	//preenche vetor de estruturas
	for(i=0; i<quant; i++)
	{
		system("cls"); printf("Contatos\n");
		printf("Digite o nome %i: ", i+1);
		fflush(stdin); gets(contato[i].nome);
		printf("Digite os numeros do celular %: ", i+1);
		fflush(stdin); gets(contato[i].celular);
	}
	
	//mostra vetor de estruturas
	printf("Mostrando Contatos\n");
	printf("------------------\n");
	for(i=0; i<quant; i++)
	{
		printf("%-31s\t", contato[i].nome); //caso mudar o tamanho_max, precisa mudar aqui
		printf("%s\n", contato[i].celular);
	}
	
	//copia dados do vetor de estruturas para o arquivo
	fwrite(contato, sizeof(registro), quant, arq);
	
	//fecha arquivo e dá free no vetor de estruturas
	fclose(arq);
	free(contato);
	
	return(0);
}

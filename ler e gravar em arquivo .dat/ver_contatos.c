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
	
	//abre arquivo e faz malloc da estrutura
	arq = fopen("contatos.dat", "rb");
	fseek(arq, 0, SEEK_END);
	contato = (registro*) malloc(ftell(arq));
	
	//vê tamanho total do arquivo e de cada estrutura
	printf("ftell arq: %i\n", ftell(arq));
	printf("sizeof registro: %i\n", sizeof(registro));
	
	//define numero de estruturas
	quant = ftell(arq) / sizeof(registro);
	printf("quant: %i\n\n", quant);
	
	//copia dados do arquivo para o vetor de estruturas
	fseek(arq, 0, SEEK_SET);
	fread(contato, sizeof(registro), quant, arq);
	
	//mostra vetor de estruturas
	printf("Mostrando Contatos\n");
	printf("------------------\n");
	for(i=0; i<quant; i++)
	{
		printf("%-31s\t", contato[i].nome); //caso mudar o tamanho_max, precisa mudar aqui
		printf("%s\n", contato[i].celular);
	}
	
	//fecha arquivo e dá free no vetor de estruturas
	fclose(arq);
	free(contato);
	
	return(0);
}

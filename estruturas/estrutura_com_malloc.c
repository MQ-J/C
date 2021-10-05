/*bibliotecas e definicoes*/
#include <stdio.h>
#include <stdlib.h>                                                              /*para usar fflush*/
#include <string.h>                                                              /*para usar fgets*/
#define MAX 25                                                    /*isso facililita na hora de trocar o valor maximo*/

/*estrutura*/
typedef struct
{
	char nome[MAX];
	int idade;
} cadastro;

cadastro * cliente;                                       /* "cliente" - gaveta de memoria // "cadastro" - formato da gaveta */

/*corpo do programa*/
int main()
{
	int numbs, i;
	printf("digite quantas pessoas voce quer cadastrar: ");
	scanf("%i", &numbs);
	fflush(stdin);
	
	cliente = (cadastro * )malloc( numbs * (sizeof(cadastro))); /*para alocar na memória somente o espaco necessario,
	                                                            e com a parte do "numbs *" pode ter mais de uma pessoa*/
	
	printf("\nPREENCHA OS CAMPOS:\n");                     /*nao separei essa parte em funcoes pois de qualquer forma os valores somem no final*/
	for (i=0; i<numbs; i++)
	{
		printf("\tprimeiro nome: ");
		fgets(cliente[i].nome, MAX, stdin);                       /*fgets para ignorar conteudo adicional na estrutura*/
		fflush(stdin);                                         /*stdin para ignorar conteudo adicional no buffer do teclado*/
		printf("\tidade: ");
		scanf("%i", &cliente[i].idade);             /*exemplo: na estrutura numero 1 salva no ponteiro *cliente, a idade recebe valor tal */
		fflush(stdin);
	}
	
	printf("\nVEJA OS VALORES:\n");
	for (i=0; i<numbs; i++)
	{
		printf("\tnome: %s", cliente[i].nome);               /*mesmo esquema do ultimo  comentario, mas agora para mostrar*/
		printf("\tidade: %i", cliente[i].idade);
		printf("\n");
	}
	free(cliente);                                      /*nao quero ficar acumulando estruturas perdidas por ai ne? melhor limpar*/
	return(0);
}

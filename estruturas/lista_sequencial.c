/*bibliotecas e definições*/
#include <stdio.h>

#define nome_max    50
#define pessoas_max 10


/*estruturas*/
typedef struct
{
	int primary_key;
	char nome[nome_max];
}
informacoes;

typedef struct
{
	informacoes pessoas[pessoas_max];
	int itens;
}
lista_nomes;


/*variáveis globais*/
int op;
int i;


/*funções*/
void consulta(lista_nomes * Principal)
{
	if(Principal->itens == 0)
	{
		printf("A lista está vazia");
		getch(); main();
	}
	for(i=0; i<Principal->itens; i++)
	printf("chave: %i\t nome: %s\n", Principal->pessoas[i].primary_key, Principal->pessoas[i].nome);
}

void adiciona(lista_nomes * Principal)
{
	if(pessoas_max > Principal->itens)
	{
		for(i=0; i<Principal->itens; i++)
		{
			Principal->pessoas[i].primary_key = i+1;
			printf("digite o nome: ");
			gets(Principal->pessoas[i].nome);
		}
	}
	main();
}

void edita(lista_nomes * Principal)
{
	printf("digite a chave do nome a ser editado: ");
	scanf("%i", &op);
	if(op <= Principal->itens)
	{
		for(i=0; i<Principal->itens; i++)
		{
			if(op == Principal->pessoas[i].primary_key)
			{
				printf("digite o novo nome: ");
				gets(Principal->pessoas[i].nome);
			}
		}
	}
	main();
}

void exclui(lista_nomes * Principal)
{
	printf("Excluir tudo? [1 - sim]");
	scanf("%i", &op);
	if(op == 1) Principal->itens = 0;
	
	main();
}


/*corpo do programa*/
int main()
{
	/*variáveis locais*/
	lista_nomes * Principal;
	//Principal->itens = 0;
	
	/*menu de opções*/
	printf("===========MENU=========\n");
	printf("1 - consultar lista\n");
	printf("2 - adicionar pessoa\n");
	printf("3 - editar pessoa\n");
	printf("4 - excluir pessoa\n");
	scanf("%i", &op); switch(op)
	{
		case 1: consulta(Principal); break;
		case 2: adiciona(Principal); break;
		case 3: edita(Principal);    break;
		case 4: exclui(Principal);   break;
	}
	
	return(0);
}

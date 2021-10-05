#include <stdio.h> 
#include <stdlib.h> // para usar malloc
#include <string.h> //para usar strpy e strmp

typedef struct
{
	char nome[20];
	char data_nasc[9];
	char modalidade[7];
}skatista; skatista lista[12];

void cadastro()
{
	strcpy(lista[0].nome, "Isadora Pacheco"); strcpy(lista[0].data_nasc, "MAR 2005");  strcpy(lista[0].modalidade, "PARK");
	strcpy(lista[1].nome, "Dora Varella");    strcpy(lista[1].data_nasc, "JUL 2001");  strcpy(lista[1].modalidade, "PARK");
	strcpy(lista[2].nome, "Pamela Rosa");     strcpy(lista[2].data_nasc, "JUL 1999");  strcpy(lista[2].modalidade, "STREET");
	strcpy(lista[3].nome, "Yindiara Asp");    strcpy(lista[3].data_nasc, "OCT 1997");  strcpy(lista[3].modalidade, "PARK");
	strcpy(lista[4].nome, "Leticia Bufoni");  strcpy(lista[4].data_nasc, "APR 1993");  strcpy(lista[4].modalidade, "STREET");
	strcpy(lista[5].nome, "Rayssa Leal");     strcpy(lista[5].data_nasc, "JAN 2008");  strcpy(lista[5].modalidade, "STREET");
	strcpy(lista[6].nome, "Luiz Francisco");  strcpy(lista[6].data_nasc, "JUL 2000");  strcpy(lista[6].modalidade, "PARK");
	strcpy(lista[7].nome, "Pedro Barros");    strcpy(lista[7].data_nasc, "MAR 1995");  strcpy(lista[7].modalidade, "PARK");
	strcpy(lista[8].nome, "Giovanni Vianna"); strcpy(lista[8].data_nasc, "JAN 2001");  strcpy(lista[8].modalidade, "STREET");
	strcpy(lista[9].nome, "Pedro Quintas");   strcpy(lista[9].data_nasc, "MAI 2002");  strcpy(lista[9].modalidade, "PARK");
	strcpy(lista[10].nome, "Kelvin Hoefler"); strcpy(lista[10].data_nasc, "FEB 1993"); strcpy(lista[10].modalidade, "STREET");
	strcpy(lista[11].nome, "Felipe Gustavo"); strcpy(lista[11].data_nasc, "FEB 1991"); strcpy(lista[11].modalidade, "STREET");
}

int main()
{
	skatista pesquisa;
	int i;
	
	cadastro();
	
	printf("PESQUISA SKATISTA OLIMPICO\n");
	printf("\ndigite o nome: ");         gets(pesquisa.nome);
	printf("\ndigite a data de nasc: "); gets(pesquisa.data_nasc);
	printf("\ndigite a modalidade: ");   gets(pesquisa.modalidade);
	
	for(i=0; i<=11; i++)
	{
		if(strcmp(pesquisa.nome, lista[i].nome) == 0)
		{
			if(strcmp(pesquisa.data_nasc, lista[i].data_nasc) == 0)
			{
				if(strcmp(pesquisa.modalidade, lista[i].modalidade) == 0)
				printf("\nSkatista pesquisado esta nas olimpiadas!");
				else
				printf("\nDados incorretos!"); break;
			}
			else
			printf("\nDados incorretos!"); break;
		}
		else
		if(i == 11) {printf("\nSkatista pesquisado nao esta nas olimpiadas!"); break;}
	}
	
	
	return 0;
}

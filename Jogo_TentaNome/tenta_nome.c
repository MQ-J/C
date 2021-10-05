//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <time.h>

//ponteiro para malloc do nome
char * vet;

//funções adicionais
void tenta_nome(int i);
void SUPER_tenta_nome(int i);

int main()
{
  //variáveis
  system("mode 50, 15");
  srand(time(NULL));
  setlocale(LC_ALL, "");
  char caractere, menu;
  int i = 0;
  
  //malloc
  if((vet = (char *) malloc(1 * sizeof(char))) == NULL) return(1);
  
  //design
  system("cls"); printf("Digite seu nome: ");
  do
  {
  	fflush(stdin); caractere = getch();
	printf("%c", caractere);
  	if(caractere != 13)
  	{
		if((vet = realloc(vet, i+1 * sizeof(char))) == NULL) return(2);
  		vet[i] = caractere;
  		i++;
  	}
  }
  while (caractere != 13);
  vet[i] = '\0';
  
  printf("Tentar nome automáticamente: digite A\n");
  printf("Tentar nome manualmente:     digite M\n");
  fflush(stdin); menu = getch(); switch(menu)
  {
  	case 'a': case 'A': SUPER_tenta_nome(i); break;
  	case 'm': case 'M': tenta_nome(i);       break;
  	default: printf("ok, nenhuma então!"); exit(0);
  }
  
  return (0);
}

void tenta_nome(int i)
{
	//variáveis
	char op, aux;
	int count, a, b;
	
	//escolha aleatória
	for(count=0; count < i; count++)
	{
		a = (rand() % i);
		b = (rand() % i);
		aux    = vet[a];
		vet[a] = vet[b];
		vet[b] =    aux;
	}
	
	//mostra na tela
	system("cls"); printf("Seu nome é: %s", vet);
	printf("\n Voltar ao menu?");
	printf("\n [s = sim] [n = não] ");
	fflush(stdin); op = getch();
	
	//controle de loop
	if(op == 'n' || op == 'N') tenta_nome(i);
	if(op == 's' || op == 'S') main();
	else
	{
		free(vet);
		exit(0);
	}
}


void SUPER_tenta_nome(int i)
{
	//variáveis
	char op, aux;
	char * copy = vet;
	int count, a, b;
	
	//escolha aleatória
	while(1)
	{
		a = (rand() % i);
		b = (rand() % i);
		aux     = copy[a]; //POR ALGUM MOTIVO VET TÁ MUDANDO POR AQUI
		copy[a] = copy[b];
		copy[b] =     aux;
		
		system("cls"); printf("Seu nome é: %s", copy);
		printf("\n%s e %s", vet, copy); getch();
		if(strcmp(copy, vet) == 0) break;
	}
	printf("\n ACHEI SEU NOME!");
	getch();
}

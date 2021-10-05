#include <stdio.h>  //biblioteca default
#include <stdlib.h> //para system, malloc
#include <string.h> //para memset
#include <conio.h>  //para getch

int main()
{
	//variáveis
	char * nome;
	int i, tamanho, soma = 0;
	
	//limpa tela
	system("cls");
	system("mode 50,15");
	
	//pega tamanho da palavra
	printf("\n\ndigite tamanho da palavra: ");
	fflush(stdin); scanf("%i", &tamanho);
	
	//faz malloc da palavra
	nome = (char*)malloc((tamanho+1) * sizeof(char));
	
	//limpa possível lixo de memória
	memset(nome, '\0', sizeof(nome));
	
	//pega a palavra
	printf("digite a palavra: ");
	fflush(stdin); gets(nome);
	
	//soma caracteres da palavra
	for(i=0; i<=tamanho; i++)
	soma = soma + nome[i];
	
	//mostra resultados
	printf("\npalvra: %s", nome);
	printf("\nsoma dos caracteres da palavra: %i", soma);
	
	//compara strings
	while (soma != 316)
	{
		printf("\nfim nao foi digitado");
		fflush(stdin); getch();
		main();
	}
	
	//tira malloc
	free(nome);
	
	return 0;
}

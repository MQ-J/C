/*BIBLIOTECAS*/
#include <stdio.h>
#include <stdlib.h> //system()
#include <locale.h> //setlocale()
#include <conio.h>  //getch()

/*FUNÇÕES*/
void loop(void);

/*CORPO DO PROGRAMA*/
int main()
{
	/*variáveis e design do menu principal*/
	char op;
	system("mode con: cols=42 lines=20");
	system("color 0e");
	setlocale(LC_ALL,"");
	
	/*menu principal*/
	printf("------------------------------------------\n");
	printf("              USUARIO X LOOP              \n");
	printf("------------------------------------------\n");
	printf("     Seria você  mais rápido que o PC?  \n\n");
	printf(" Regras: tente fechar as abas antes que   \n");
	printf(" elas sejam muitas e seja tarde demais    \n");
	printf("       (1 página a cada 3 segundos)       \n");
	printf("\n [Digite S = SIM, VAMBORA!]");
	printf("\n [Digite N = NÃO, OBRIGADO]");
	fflush(stdin); op = getch();
	
	/*chama o loop ou não*/
	if(op == 'S' || op == 's')
	loop();
	else
	{
	printf("\n\nok, tchau (._.)");
	getch();
	return(0);
	}
}

void loop()
{
	/*váriáveis e design ta tela de carregamento*/
	int i;
	system("mode con: cols=24 lines=1");
	system("color 0a");
	
	/*tela de carregamento para usuário repensar se vale a pena*/
	for(i=60; i>=0; i--)
	{
		printf("INICIANDO EM %i segundos", i);
		Sleep(1000);
		system("cls");
	}
	
	/*loop infinito de telas*/
	system("color 04");
	printf("COMEÇOU!");
	while(1)
	{
		Sleep(3000);
		system("start tela_de_erro.exe");
	}
}	

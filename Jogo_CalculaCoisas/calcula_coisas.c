/* BIBLIOTECAS */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <time.h>

/* FUN��ES */
void pegaValor      (void);
void MenuTriang     (void);
void voltaMenu      (void);
void voltaMenuTriang(void);

/* VARI�VEIS - opera��es*/
char lc_all, op;
int  conta;
/*contas normais*/
float num1, num2;
/*mostrar aleatoriamente*/
int quant_aleatorio, limite_aleatorio;

/* MENU GERAL */
int main()
{	
	srand(time(NULL));      /*menu "numero aleat�rio"*/
	setlocale (lc_all, ""); /*acentos*/
		
	system ("cls"); system ("color 0b"); system ("mode 39,23");
	printf ("\n          CALCULAR COISAS            \n");
	printf ("\n -------------------------------       ");
	printf ("\n Soma.................[digite S]       ");
	printf ("\n Subtra��o............[digite B]       ");
	printf ("\n Multiplica��o........[digite M]       ");
	printf ("\n Divis�o..............[digite D]       ");
	printf ("\n Pot�ncia.............[digite P]       ");
	printf ("\n Lados de tri�ngulo...[digite L]       ");
	printf ("\n N�meros aleat�rios...[digite N]       ");
	printf ("\n Hackear a nasa.......[digite H]       ");
	printf ("\n -------------------------------     \n");
	fflush (stdin); op = getch();
	switch (op)
	{

	/* MENU SOMA */
	case 's': case 'S':
		pegaValor();
		printf (" Resultado: %.2f", (num1 + num2));
		/*volta*/
		voltaMenu();
		break;
		
	/* MENU SUBTRA��O */
	case 'b': case 'B':
		pegaValor();
		printf (" Resultado: %.2f", (num1 - num2));
		/*volta*/
		voltaMenu();
		break;

	/* MENU MULTIPLICA��O */
	case 'm': case 'M':
		pegaValor();
		printf (" Resultado: %.2f", (num1 * num2));
		/*volta*/
		voltaMenu();
		break;
			
	/* MENU DIVIS�O */
	case 'd': case 'D':
		pegaValor();
		printf (" Resultado: %.2f", (num1 / num2));
		/*volta*/
		voltaMenu();
		break;
	
	/* MENU POT�NCIA */
	case 'p': case 'P':
		printf("\n Digite a base: ");
		fflush (stdin); scanf ("%f", &num1);
		printf (" Digite o expoente: ");
		fflush (stdin); scanf ("%f", &num2);
		printf (" Resultado: %.2f", pow(num1, num2));
		/*volta*/
		voltaMenu();
		break;

	/* MENU TRI�NGULO */
	case 'l': case 'L':
		MenuTriang();	
			
	/* MENU N�MEROS ALEAT�RIOS */
	case 'n': case 'N':
		printf("\n Digite quantos n�meros voc� quer: ");
		fflush (stdin); scanf ("%i", &quant_aleatorio);
		printf (" Varia��o de 1 a: ");
		fflush (stdin); scanf ("%i", &limite_aleatorio);
		/*mostra numeros*/
		for (conta = 0; conta < quant_aleatorio; conta++)
		{
			printf("| %i |\t", (rand() % limite_aleatorio+1));
			Sleep (500);
		}
		/*volta*/
		voltaMenu();
		break;
		
	/* MENU HACK */
	case 'h': case 'H':
		/*tela de carregamento*/
		for (conta = 0; conta <= 100; conta++)
		{
			system("cls");
			printf(" Carregando: ");
			printf("%i", conta);
			Sleep (90);
		}
		/*tela ao estilo matrix*/
		system("cls");
		system("color 02");
		do
		printf("%i", (rand() % 2));
		while (1);
		break;
		
	/* OP��O INV�LIDA PRINCIPAL */
	default:
		printf("\n\n Op��o inv�lida!");
		voltaMenu();
	}
	return 0;
}

/* ENTRADA DE DADOS */
void pegaValor()
{
	printf ("\n Primeiro valor: ");
	fflush (stdin); scanf ("%f", &num1);
	printf (" Pegundo valor: ");
	fflush (stdin); scanf ("%f", &num2);
}

/* MENU TRIANGULOS */
void MenuTriang()
{
	system("cls");
	printf ( "\n O que vo�� tem?                           ");
	printf ("\n Hipotenusa e cateto.........[digite a]     ");
	printf ("\n Cateto e cateto.............[digite b]\n\n ");
	fflush (stdin); op = getch();
	switch (op)
	{
		/*MENU TRIANG1*/ 
		case 'a': case 'A':
		printf ("\n Digite a hipotenusa: ");
		fflush (stdin); scanf ("%f", &num1);
		printf (" Digite o cateto: ");
		fflush (stdin); scanf ("%f", &num2);
		/*avisa de erro*/
		if (num1 < num2)
		{
			printf("\n N�o d�, hipotenusa < cateto");
			voltaMenuTriang();
		}
		/*conta triangulo1*/
		printf (" O outro cateto �: %.2f", sqrt ((num1 * num1) - (num2 * num2)));
		/*volta*/
		voltaMenuTriang();
		break;

		/*MENU TRIANG2*/
		case 'b':  case 'B':
		printf ("\n Digite um cateto: ");
		fflush (stdin); scanf ("%f", &num1);
		printf (" Digite o outro cateto: ");
		fflush (stdin); scanf ("%f", &num2);
		/*conta triangulo2*/
		printf (" A Hipotenusa �: %.2f", sqrt ((num1*num1) + (num2*num2)));
		/*volta*/
		voltaMenuTriang();
		break;
				
		/*OP��O INV�LIDA TRI�NGULO*/
		default:
		voltaMenuTriang();
	}
}

/* RETORNO AO MAIN */
void voltaMenu()
{
	printf("\n\n Quer voltar? [s=sim]\n\n ");
	fflush (stdin); op = getch();
	if (op == 's')
	main();
}

/* RETORNO AO MENU DE TRIANGULOS */
void voltaMenuTriang()
{
	printf("\n\n Quer voltar?               ");
	printf("\n [m = menu principal]         ");
	printf("\n [t = menu de tri�ngulos]\n\n ");
	fflush (stdin); op  = getch();
	if (op == 'm' || op == 'M')
	main();
	if (op == 't' || op == 'T')
	{
		MenuTriang();
	}
	exit (0);
}

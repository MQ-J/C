/*BIBLIOTECAS*/
#include <stdio.h>
#include <stdlib.h>

/*VARIÁVEIS*/
char sexo;
float altura, peso;

/*FUNÇÕES*/
void pesomasc() /*calcula peso ideal masculino*/
{
  printf("\nQual a sua altura? [Use ponto no lugar da virgula]\n");
  scanf("%f", &altura);
  peso = (72.7 * altura) - 58;
  printf("\nSeu peso ideal: %.2f\n", peso);
}

void pesofemi() /*calcula peso ideal feminino*/
{
  printf("\nQual a sua altura? [Use ponto no lugar da virgula]\n");
  scanf("%f", &altura);
  peso = (62.1 * altura) - 44.7;
  printf("\nSeu peso ideal: %.2f\n", peso);
}

int main()
{
  system("cls");
  printf("Calcule seu peso ideal");
  printf("\n\nDigite o seu sexo [m = masculino]  [f = feminino]\n");
  scanf("%c", &sexo);
  switch (sexo)
  {
    case 'm': pesomasc(); break;
    case 'f': pesofemi(); break;
    default : printf("\nDado inválido\n"); system("pause"); main();
  }
  system("pause");
  return 0;
}

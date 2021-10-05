/*BIBLIOTECAS*/
#include <stdio.h>

/*VARIÁVEIS GERAIS*/
char lado;

/*FUNÇÕES*/
void direitavolver()
{
  switch (lado)
  {
    case 'N': lado = 'L'; break;
    case 'L': lado = 'S'; break;
    case 'S': lado = 'O'; break;
    case 'O': lado = 'N'; break;
  }
}

void esquerdavolver()
{
  switch (lado)
  {
    case 'N': lado = 'O'; break;
    case 'O': lado = 'S'; break;
    case 'S': lado = 'L'; break;
    case 'L': lado = 'N'; break;
  }
}


int main()
{
  //variáveis locais e pré-definições:
  int  i;
  int  numb;
  char vet[numb];
  lado = 'N';
  //começo com a interação com o usuário:
  printf("Quantos comandos serão dados?\n");
  scanf ("%i", &numb);
  numb--; //essa parte ajusta o valor de numb para dar certo no vetor.
  printf("Qual vai ser a ordem de comandos?\n");
  printf("[use somente 'D' (direta) e 'E' (esquerda) maiusculos]\n");
  for (i=0; i <= numb; i++)
    scanf(" %c", &vet[i]);
  //a partir daqui lê-se o vetor de comandos (direita e esquerda) para mudar o vetor de direções (norte, sul, leste e oeste):
  for (i=0; i <= numb; i++)
  {
    if (vet[i] == 'D')
      direitavolver();
    if (vet[i] == 'E')
      esquerdavolver();
  }
  //e então produz-se a saída final:
  printf("-_-_-_-_-_-_-_-_-_-_-_-_\n");
  printf("ENTRADA\t\t\tSAIDA\n");
  printf("%i\t\t\t\t%c\n", numb+1, lado);
  for (i=0; i <= numb+1; i++)
    printf("%c", vet[i]);
    
  return 0;
}

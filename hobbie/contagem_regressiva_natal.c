#include <stdio.h>

int mes, dia, total_dias, x, natal = 360; //o natal sempre ocorre no 360° dia em um ano bissexto.

void conta_dias (void) //função que conta os dias com base no mês.
{
  switch (mes)
  {
    case 1: total_dias = dia; break;
    case 2: total_dias = 31 + dia; break;
    case 3: total_dias = 60 + dia; break;
    case 4: total_dias = 91 + dia; break;
    case 5: total_dias = 121 + dia; break;
    case 6: total_dias = 152 + dia; break;
    case 7: total_dias = 182 + dia; break;
    case 8: total_dias = 213 + dia; break;
    case 9: total_dias = 244 + dia; break;
    case 10: total_dias = 274 + dia; break;
    case 11: total_dias = 305 + dia; break;
    case 12: total_dias = 335 + dia; break;
  }
}

int main(void)
{
  //primeiro o usuário digita o mês e dia:
  printf("Digite o mes:");
  scanf("%i", &mes);
  printf("Digite o dia:");
  scanf("%i", &dia);
  
  conta_dias(); //aqui é chamada a função que conta os dias.
  mes = 0;      //zerando os valores.
  dia = 0;      //zerando os valores.

  if (total_dias < natal)
  {
    if (total_dias == 359)
    {
      printf("E vespera de natal!");
      return 0;
    }
    x = natal - total_dias;
    printf("Faltam %i dias para o natal!", x);
  }

  if (total_dias == natal)
  printf("E natal!");

  if (total_dias > natal)
  printf("Ja passou!");

  return 0;
}

/*bibliotecas e definições*/
#include <stdio.h>
#define TAMANHO_VETOR 20

/*corpo do programa*/
int main() 
{
	//variáveis
	float vetor[TAMANHO_VETOR];
    float escolhido;
    int   anterior, i;
    
    //prenche e bagunça vetor
    printf("Vetor baguncado: \n");
    for (i=0; i<TAMANHO_VETOR; i++)
	{
		if (i % 2 == 0) printf("\n");
		vetor[i] = i * (TAMANHO_VETOR - i);
		printf("%.2f\t", vetor[i]);	
	}
		
    //insertion sort
    for (i = 1; i < TAMANHO_VETOR; i++) 
    {
		escolhido = vetor[i];
		anterior  = i - 1;
		
         while ( (anterior >= 0) && (vetor[anterior] > escolhido) ) 
		{
	    	vetor[anterior + 1] = vetor[anterior];
	    	anterior--;
		}
		vetor[anterior + 1] = escolhido;
    }
    
    //mostrando vetor arrumado 
    printf("\n---------\nVetor arrumado: \n");
    for (i=0; i<TAMANHO_VETOR; i++)
		{
		if (i % 2 == 0) printf("\n");
		printf("%.2f\t", vetor[i]);	
		}
    
    return (0);
}

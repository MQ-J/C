/* BIBLIOTECAS E DEFINIÇÕES */
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_VETOR 35

/* CORPO DO PROGRAMA */
int main () 
{
	/*variáveis e definições*/
	int vetor[TAMANHO_VETOR];
    int 	pos_min, i, j;
    float 	aux;
    
    /*preenche e bagunça vetor*/
    for(i=0; i<TAMANHO_VETOR; i++)
    {
    	vetor[i] = i;
    	if(vetor[i] % 2 == 0)
    	vetor[i] = i*3;
	}
	for(i=0; i<TAMANHO_VETOR; i++) printf("\t%i", vetor[i]);
    
    /*selection sort*/
    for(i=0; i < TAMANHO_VETOR-1; i++) 
    {
        pos_min = i;
        for (j=i+1; j < TAMANHO_VETOR; j++) 
        {
            if (vetor[j] < vetor[pos_min]) 
            {
                pos_min = j;
            }
        }
        if (pos_min != i) 
        {
            aux            = vetor[i];
            vetor[i]       = vetor[pos_min];
            vetor[pos_min] = aux;
        }
    }
    
    /*mostra na tela o vetor*/
    printf("\n--------------------------------\n");
    for(i=0; i<TAMANHO_VETOR; i++) printf("\t%i", vetor[i]);
    
    return(0);
}

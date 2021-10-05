#include <stdio.h>

int main()
{
	float R,A,H,O,M,G,L,result;
	int i;
	
	printf("FORMULA DA LADY GAGA:");
	printf("\n\n2(RAH) . 3(AH) + RO(MA + MAMA) + 2(GA) + OHH + 2(LA)\n");
	
	printf("\nEscolha o valor de R:");
	fflush(stdin); scanf("%f", &R);
	printf("\nEscolha o valor de A:");
	fflush(stdin); scanf("%f", &A);
	printf("\nEscolha o valor de H:");
	fflush(stdin); scanf("%f", &H);
	printf("\nEscolha o valor de O:");
	fflush(stdin); scanf("%f", &O);
	printf("\nEscolha o valor de M:");
	fflush(stdin); scanf("%f", &M);
	printf("\nEscolha o valor de G:");
	fflush(stdin); scanf("%f", &G);
	printf("\nEscolha o valor de L:");
	fflush(stdin); scanf("%f", &L);
	
	result = (2*(R*A*H)) * (3*(A*H)) + (R*O*(M*A + M*A*M*A) + (2*(G*A)) + (O*O*H) + (2*(L*A)));
	printf("\nResultado: %.2f", result);
	getch();
	
	return(0);
}

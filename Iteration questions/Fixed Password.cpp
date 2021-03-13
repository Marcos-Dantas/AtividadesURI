#include <stdio.h>

int main () {
	int X;
	
	do
	{
	   scanf("%d", &X);  
		if (X==2002) 
			printf("Acesso Permitido\n");
		else
			printf("Senha Invalida\n");
	} while (X !=2002);
	return 0;	
}
#include <stdio.h>

int main () {
	int X,even,cont;
	
	do {
		scanf("%d", &X);
		even = 0;
		cont = 0;
		if (X==0) break;
			while(cont<5) {
				if (X%2==0) {
					even+= X;
					cont++;
				}
			X++;
			}
		
		printf("%d\n", even);
	} while (X!=0);	
}
//O erro era so a linha 10 que nao tinha nos outros, no caso verificar se o X e zero
//e sair rapidamente do programa.
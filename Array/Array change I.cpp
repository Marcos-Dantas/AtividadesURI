#include <stdio.h>

int main () {
	int N[20],aux;
	
	for (int i = 0; i < 20; i++) {
		scanf("%d", &N[i]);
	}
	for(int i = 0, j = 19; i < 10; i++,j--) { 
		aux = N[j];
		N[j] = N[i]; 
		N[i] = aux;
	}
	for(int i = 0; i < 20; i++) {
		printf("N[%d] = %d\n", i,N[i]);
	}
}
//algoritmo de ordenação basico o 1 troca com o ultimo
// e a posição de repetição tem que ser a metade da original.
#include <stdio.h>

int main () {
	int N[10];
	
	scanf("%d", &N[0]);
	for(int i = 1; i < 10; i++) {
			N[i] = N[i-1]+N[i-1];
	}
	for(int i = 0; i < 10; i++) {
		printf("N[%d] = %d\n", i, N[i]);
	}
}

//o erro era que eu tava imprimindo e fazendo as contas no vetor vazio.
//N[i] = N[i-1] + N[i-1]; vai prencher o array sempre com o dobro do anterior.
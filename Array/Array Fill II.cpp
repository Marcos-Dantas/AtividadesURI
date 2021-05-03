#include <stdio.h>

int main () {
	int T,N[1000]; 
	
	scanf("%d", &T);
	
	for (int i = 0, j = 0; i < 1000; i++,j++) {
		if (j == T) {
			j = 0;
		}
		N[i] = j;
	}
	for (int i = 0; i < 1000; i++) {
		printf("N[%d] = %d\n",i,N[i]);
	}
 }
 
 //O problema era que o vetor acabava recebendo lixo em vez do valor certo.
 //colocando para verificar apenas se o valor for igual com j==t
 // faz com que o valor seja substituido e colocado logo na posição certa
 //dentro do vetor.
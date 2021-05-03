#include <stdio.h>

int main () {
	int N;
	
	do {
		scanf("%d", &N);
		if(N == 0) break;
		int Matrix[N][N],maior,lista,j,cont=1,z;
		
		for(int i = 0, valor = 1; i < N; i++,valor*=2) {
			for(j = 0, lista = valor; j < N; j++,lista*=2) {
				Matrix[i][j] = lista;
				if(i == 0 && j == 0) 
					maior = lista;
				else if(maior < lista)
					maior = lista;
			}
		}
		if(maior > 10) {
			cont = 0;
		while(maior != 0) {
			cont++;
			maior = maior / 10; 
		}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				z = 1;
				if(j == 0){
					printf("%*d",cont,Matrix[i][j]);	
				}else {
					printf(" %*d",cont,Matrix[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
		
	} while ( N != 0);
	
	return 0;	
}
/*
Plano:
square matrix III

-construir uma matriz de ordem N/N
-prenche-las com valores que são o dobro do anterior
-printalos de forma formatada igual a T, onde T e dado
pelo numero de digitos do maior numero da matriz;
--posso fazer com que uma string tenha nada nela e eu possa digita la na atividade

-para descobrir quantos algoritmos um numero tem divida sucessivamente por 10. enquanto ele for
divisivel.
- para formatar valores de forma dinamica em C basta adicionar * logo antes do formato do valor:
	printf(" %*d",cont,Matrix[i][j]);

*/
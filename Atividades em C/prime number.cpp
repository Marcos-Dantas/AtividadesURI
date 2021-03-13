#include <stdio.h>

int main () {
	int N,X,cont,prime;
	
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &X);
		cont=1;
		prime=0;
		while(cont<=X) {
			if(X%cont==0) {
				prime++;
			} 
			cont++;
		}
		if(prime==2)
			printf("%d eh primo\n", X);
		else
			printf("%d nao eh primo\n",X);
	}
}
//nao estava pegando todos os numeros primos a logica anterior desse programa

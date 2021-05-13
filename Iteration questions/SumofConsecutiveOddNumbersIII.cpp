#include <stdio.h>

int main () {
	int N,X,Y,cont,odd;
	
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &X,&Y);
		cont = odd = 0;
		while (cont!=Y) {
           if (X%2==1 || X%2==-1) {
           		odd = odd + X;
			   cont++;
		   }
		   X++;
		}
	printf("%d\n", odd);
	}	
}

//O erro era que tinha rodar com numeros negativos tambem.
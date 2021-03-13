#include <stdio.h>

int main () {
	int T,N;
	double Fib[60];
	
	scanf("%d",&T);
	
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		if (N>60) {
			continue;
		}
		Fib[0] = 0; 
		Fib[1] = 1;
		Fib[2] = 1;
		if(N>2) {
			for (int i = 1; i < N; i++) {
				Fib[N] = Fib[0] + Fib[1];  
				Fib[0] = Fib[1]; 
				Fib[1] = Fib[N];     
			}
		}
		printf("Fib(%d) = %.0lf\n", N,Fib[N]);
		
	}
}



//O problema principal era so que o vetor tinha que ser do tipo double.
//O erro era não saber aplicar a fatoração de uma forma abstrata para
//o ambiente de programação
/*
	a = 0;
	b = 1;
	c = a+b; 1 2 3 5 8 
	a = b; 1 1 2 3
	b = c 1 2 3 5   	
	
*/
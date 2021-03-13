#include <stdio.h>

int main () {
	int N,fib = 0,A,B;
	
	scanf("%d", &N);
	A = 0;
	B = 1;
	for (int i = 0; i < N; i++) {
		printf("%d", fib);
		fib = A + B;
		B = A; 
		A = fib;
		if (i < N-1) 
			printf(" ");
		else
			printf("\n");
	}
}
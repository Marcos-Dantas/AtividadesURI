#include <stdio.h>

int main () {
	int N,A;
	
	scanf("%d", &N);
	A = N;
	while(A>0) {
		if (N%A == 0) {
			printf("%d\n", N / A);
		}
		A--;
	}	
}
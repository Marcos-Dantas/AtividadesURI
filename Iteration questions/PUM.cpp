#include <stdio.h>

int main () {
	
	int N;
	
	scanf("%d", &N);
	
	for (int i = 0,j = 2, k = 3, z = 1; i < N; i++) {
		printf("%d %d %d PUM\n", z,j,k);
		z+=4;j+=4;k+=4;
	}
	
}
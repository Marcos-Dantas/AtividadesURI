#include <stdio.h>

int main () {
	
	int N;
	
	scanf("%d", &N);
	if (N < 1000 && N > 1) {
	for (int i = 0,j = 1, k = 1, z = 1; i < N; i++) {
		printf("%d %d %d\n", z,j,k);
		z+=1;j=z*z;k=z*j;
	}
	}
}
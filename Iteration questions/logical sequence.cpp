#include <stdio.h>

int main () {
	
	int N,j = 1, k = 1, z = 1, cont = 0;
	
	scanf("%d", &N);
	if (N < 1000 && N > 1) {
	
	for (int i = 0; i < N*2; i++) {
		printf("%d %d %d\n",z,j,k);
		if (cont == 0) {
			j+=1;
			k+=1;
			cont++;
		}else if (cont == 1) {
			cont = 0;
			z+=1;
			j=z*z;
			k=j*z;
		}
	}
	}   
}

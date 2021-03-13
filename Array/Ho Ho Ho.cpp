#include <stdio.h>

int main () {
	int N;
	scanf("%d", &N);
	
	while (N > 0) {
		N--;
		if(N!=0)
			printf("Ho ");
		else
			printf("Ho");
	}
	printf("!\n");
	return 0;
}
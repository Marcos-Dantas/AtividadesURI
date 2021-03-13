#include <stdio.h>

int main () {
	int N,i=0;
	float sum=0;
	do {
		scanf("%d", &N);
		if (N >= 0) { 
			sum+=N;
			i++;
		}
	} while (N >= 0);
	
	printf("%.2f\n", sum/i);
	
}
#include <stdio.h>

int main(){
	
	int M,N,sum=0;
	M = N = 1;

	for (;;) {
		scanf("%d %d", &M,&N);
		if ((M<=0) || (N<=0)){
			break;
		}
		sum = 0;
		if(M<N) {
			for (; M <= N; M++) {
				printf("%d ", M);
				sum+=M;
			}
			printf("Sum=%d",sum);
		}else if(M>N) {
			for (; N <= M; N++) {
				printf("%d ", N);
				sum+=N;
			}
			printf("Sum=%d",sum);
		}
		printf("\n");  
	}
}
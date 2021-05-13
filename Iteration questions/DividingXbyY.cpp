#include <stdio.h>

int main () {
	
	int N,X,Y;
	
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &X,&Y);
		if ((X!=0) && (Y==0))
			printf("divisao impossivel\n");
		else
			printf("%.1lf\n",(float) X/Y); 
	}
	return 0;
}

// cast e usado para forcar uma determinada operação de tipos diferente da original
// double x=9;
//  (int) x/2 = 4
// int x=9;
// (double) ou (float) x/2 = 4.5 

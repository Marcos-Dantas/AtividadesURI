#include <stdio.h>

int main () {
	int L;
	char T;
	float M[12][12],sum;
	
	scanf("%d %c",&L, &T);
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%f",&M[i][j]);
		}
	}
	for(int j = 0; j < 3; j++) {
		if (T=='S' || T=='M') {
			sum+=M[L][j]; 
		}
	}
	if(T=='M') {
		printf("%.1f\n", sum/3);
	}else if(T=='S') {
		printf("%.1f\n", sum);
	}
//	1 2 3
//	4 5 6 media 2 = 15/3=5 ou soma 15 
//	7 8 9
	
}
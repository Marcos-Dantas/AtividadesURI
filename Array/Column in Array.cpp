#include <stdio.h>

int main () {
	float M[12][12],sum=0;
	int C;
	char T;
	
	scanf("%d %c", &C,&T);
	
	for (int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			scanf("%f", &M[i][j]);
		}
	}
	for (int i = 0; i < 12; i++) {
		sum+=M[i][C];	
	}
	if(T=='S') {
		printf("%.1f\n", sum);
	}else if(T=='M'){
		printf("%.1f\n",sum/12);
	}		
}
// 1 2 3
// 4 5 6
// 7 8 9
// 30/3 = 10
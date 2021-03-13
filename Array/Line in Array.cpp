#include <stdio.h>

int main () {
	float M[12][12],sum=0;
	int L;
	char T;
	
	scanf("%d %c", &L,&T);
	
	for (int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			scanf("%f", &M[i][j]);
		}
	}
	for (int j = 0; j < 12; j++) {
		sum+=M[L][j];
	}
	if(T=='S') {
		printf("%.1f\n", sum);
	}else if(T=='M'){
		printf("%.1f\n",sum/12);
	}		
}
//	1 2 3
//	4 5 6 15/3 =5
//	7 8 9

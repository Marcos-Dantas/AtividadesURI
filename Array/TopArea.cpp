#include <stdio.h>

int main () {
	double M[12][12],sum=0;
	char O;
	int num=0,z=1;
	
	scanf("%c", &O);
	
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			scanf("%lf", &M[i][j]);
		}
	}
	for (int i = 0; i < 12; i++) {
		for (int j = i+1; j < 12-z; j++) {
			sum+=M[i][j];
			num++;
		}
		z++;
	}
	
	if(O == 'S') {
		printf("%.1lf\n", sum);
	}else if(O == 'M') {
		printf("%.1lf\n", sum/num);
	}

}
// 1 2 3
// 4 5 6
// 7 8 9
// o erro era so o vetor que tinha que ser double para uma conta mais precisa.
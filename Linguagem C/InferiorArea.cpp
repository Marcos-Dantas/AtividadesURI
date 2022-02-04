#include <stdio.h>

int main () {
	double M[12][12],sum=0;
	char O;
	int num=0,z=2;
	
	scanf("%c", &O);
	
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			scanf("%lf", &M[i][j]);
		}
	}
	for(int i = 0; i < 12; i++) {
		if(i>6) {
			for(int j = i-z; j < i; j++) {
				sum+=M[i][j];
				num++;
			}
			z+=2;
		}
	}  
	if(O == 'S') {
		printf("%.1lf\n", sum);
	}else if(O == 'M') {
		printf("%.1lf\n", sum/num);
	}

}
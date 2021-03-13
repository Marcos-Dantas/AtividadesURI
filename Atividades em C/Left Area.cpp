#include <stdio.h>

int main () {
	double M[12][12],sum;
	char O;
	int num=0,z=1;
	
	scanf("%c", &O);
	
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			scanf("%lf", &M[i][j]);
		}
	}
	for(int i = 0; i < 12; i++) {
		if(i>0 && i<6) {
		for(int j = 0; j < i ; j++) {
			sum+=M[i][j];
			num++;
		}
		}else if(i>=6 && i<11) {
		for(int j = 0; j < i-z; j++) {  
			sum+=M[i][j];
			num++;
		}
		z+=2;	
		}
	}
	if(O == 'S') {
		printf("%.1lf\n", sum);
	}else if(O == 'M') {
		printf("%.1lf\n", sum / num);
	}
}
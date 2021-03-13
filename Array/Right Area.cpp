#include <stdio.h>

int main () {
	float M[12][12],sum;
	char O;
	int num=0,s=12;
	
	scanf("%c", &O);
	
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			scanf("%f", &M[i][j]);
		}
	}
	for(int i = 1; i < 11; i++) {
		if(i<6) {
			s--;
		}else if (i>6) {
			s++;
		}
		for(int j = 0; j < 12; j++) {
			if(j>=s) {
				sum+=M[i][j];
				num++;
			}
		}
	}
	if(O == 'S') {
		printf("%.1f\n", sum);
	}else if(O == 'M') {
		printf("%.1f\n", sum / num);
	}
}
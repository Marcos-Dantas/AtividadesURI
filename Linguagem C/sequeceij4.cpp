#include <stdio.h>

int main () {
	float X=0,N=1,C=0;
	
	while (X < 2) {
		C = N+X;
		if ((X==0) || (X==1)) {
			for (int i = 0; i < 3; i++) {
				printf("I=%.0f J=%.0f\n", X,C);
				C+=1;	
			}   	   	
		}else {
			for (int i = 0; i < 3; i++) {
				printf("I=%.1f J=%.1f\n", X,C);
				C+=1;	
			}
		}
		X+=0.2;
		if( X > 2) {
			C-=3;
			for (int i = 0; i < 3; i++) {
				printf("I=%.0f J=%.0f\n", X,C);
				C+=1;	
			}
		}
	} 
	return 0;  	   	
}
#include <stdio.h>

int main () {
	float S=1,j=2;
	int cont = 3; 
	
	for (int i = 0; i <= 18; i++) {
	     S = S+( cont / j);
	  	 j*=2; 
		 cont+=2;
    }
	printf("%.2f\n", S);
	
//S = 1 + 3/2 + 5/4 + 7/8… + 1/100
}
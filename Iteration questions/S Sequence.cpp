#include <stdio.h>

int main () {
	float S = 1;
	
	for (int i = 2; i <= 100; i++) {
	     S = S+(1.0 / i); 
    }
	printf("%.2f\n", S);
	
//S = 1 + 1/2 + 1/3 + … + 1/100
}
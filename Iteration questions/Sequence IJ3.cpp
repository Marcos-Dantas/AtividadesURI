#include <stdio.h>


int main () {
	
	int num=1,N=7,C;
	
	while(num<=9) {
		C = N;
		for (int i = 0; i < 3; i++) {
			printf("I=%d J=%d\n", num,C);
			C-=1;
		}
		num+=2;
		N+=2;
	}
	return 0;	
}
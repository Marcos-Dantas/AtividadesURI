#include <stdio.h>

int main () {

	int X,Y,sum=0;
	
	scanf("%d %d", &X,&Y);
	if (X<Y){ 
		while ( X <= Y) {
		
			if (!(X%13==0)) {
				sum+=X;
			}
			X+=1;
		}
	}else if (X>Y) {
		while ( Y <= X) {
		
			if (!(Y%13==0)) {
				sum+=Y;
			}
			Y+=1;
		}
	}
	printf("%d\n", sum);
}
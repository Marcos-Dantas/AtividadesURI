#include <stdio.h>

int main () {
	int X,Y;
	
	while (scanf("%d %d", &X,&Y) && (X != Y)) {
		if (X>Y) 
			printf("Decrescente\n");
		else if(X<Y)
			printf("Crescente\n");
	}
	return 0;	
}
#include<stdio.h>

int main () {
	
	int X,Y;
	
	scanf("%d %d", &X,&Y);
	if (X < Y) {
		while (X < Y) {	
		if ((X%5==2) || (X%5==3)) {
				printf("%d\n", X);
		}
		X+=1;
		}
	}else if (X > Y) {
		while (X > Y) {	
		if ((Y%5==2) || (Y%5==3)) {
				printf("%d\n", Y);
		}
		Y+=1;
		}
	}else 
		printf("0\n");
}
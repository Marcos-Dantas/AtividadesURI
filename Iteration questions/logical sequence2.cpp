#include <stdio.h>

int main () {
	int X,Y;
	
	scanf("%d %d", &X,&Y);
	if ((X>1 && X<20) && (Y>X && Y<100000)) {
		for (int i = 1; i <= Y; i++) {
			printf("%d", i);
			if (i%X == 0) {
				printf("\n");
			}else {
				printf(" ");
			}
		}
	}
}
//erro de apresenta��o. estava printando um espa�o no final em "%d ".
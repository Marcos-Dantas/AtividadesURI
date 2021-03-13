#include <stdio.h>

int main () {
	
	unsigned X,ALC,GAS,DIS;
	ALC = GAS = DIS = 0;
	do {
		scanf("%u", &X);
		if (X==1) {
			ALC+=1;
		}else if (X==2) {
			GAS+=1;
		}else if (X==3){
			DIS+=1;
		}
	} while (X != 4);
	puts("MUITO OBRIGADO");
	printf("Alcool: %d\n", ALC);
	printf("Gasolina: %d\n", GAS);
	printf("Diesel: %d\n", DIS);
}
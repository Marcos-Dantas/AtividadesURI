#include <stdio.h>

int main () {
	int Num,sum_factorial=1;
	
	printf("Digite o numero em questao: ");
	scanf("%d", &Num);
	
	for (int i = 1; i < Num+1; i++) {
		sum_factorial = sum_factorial * i;
	}
	printf("O correspondente de %d eh = %d\n",Num,sum_factorial);
	return 0;
}
#include <stdio.h>

int main () {
	int Num_cases,Num,sum_perfect,cont;
	
	printf("Digite o numero de casos: ");
	scanf("%d", &Num_cases);
	
	for (int i = 0; i < Num_cases; i++) {
		printf("\nDigite o numero em questao: ");
		scanf("%d", &Num);
		sum_perfect = 0;
		cont = 1;
		while(sum_perfect < Num) {
			sum_perfect+=cont;
			cont++;
		}
		if (sum_perfect == Num && sum_perfect != 1) { 
			printf("%d eh perfeito\n", Num);
		}else { 
			printf("%d nao eh perfeito\n", Num);
		}
	}
	return 0;
}
//O erro era que tinha que verificar o 1 tambem no Gr
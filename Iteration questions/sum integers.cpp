#include <stdio.h>

int main () {
	int Num,Num_cont,sum_int = 0;
	printf("Digite o primeiro numero e o segundo: ");
    scanf("%d %d",&Num,&Num_cont);
    if (Num_cont <= 0) {
		while (Num_cont <= 0) {
		  printf("Ultimo valor negativo ou zero, digite novamente: ");
		  scanf(" %d", &Num_cont);
		}
	}
    for (int i = 0; i < Num_cont; i++) {
	     sum_int = sum_int + (Num + i);
    }
    
	printf("\nResultado da soma de inteiros: %d\n", sum_int);
	return 0;
}

//Era so pra printar a soma de numeros N vezes de A.
//E a soma é de inteiros consecutivos logo = X+1, X+2, X+3...

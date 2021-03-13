#include <stdio.h>

int main () {
	int Num_cont,Num_sum,sum,Quant_int=0;
	
	do {
		printf("Digite o primeiro numero, e o segundo: \n");
		scanf("%d %d",&Num_cont,&Num_sum);
		if(Num_sum <= Num_cont) { 
			while (Num_sum <= Num_cont) {
				printf("O ultimo numero e menor ou igual ao primeiro, digite outro: ");
				scanf("%d", &Num_sum);
			}
		}
	} while (Num_sum <= Num_cont);
	
	for(sum = 0; sum < Num_sum; Num_cont+=1) {
		sum = sum + Num_cont;  
		Quant_int++;
	}
	
	printf("\nA quantidade de numeros inteiros sera: %d\n",Quant_int);	
}
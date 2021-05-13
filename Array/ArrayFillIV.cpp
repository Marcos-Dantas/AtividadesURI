#include<stdio.h>

int main () {
	int array_odd[5],array_even[5],N,j,z;
	j = z = 0;
	
	
	for (int i = 0; i < 15; i++) {
		scanf("%d", &N); 
		
		if(N%2==0) {
			array_even[j] = N;
			j++;
		}else if(N%2==1 || N%2==-1) {
			array_odd[z] = N;
			z++;
		}
		if(j==5){
			j = 0;
				while (j<5) { 
					printf("par[%d] = %d\n", j,array_even[j]);
					j++;
				}
			j = 0;
			continue;
		}
		if(z==5) {	
			z = 0;
				while (z<5) { 
					printf("impar[%d] = %d\n", z,array_odd[z]);
					z++;
				}
			z = 0;
			continue;	
		}			
	}
	for (int i = 0; i < z; i++) {
		printf("impar[%d] = %d\n", i,array_odd[i]);
	}
	for (int i = 0; i < j; i++) {
		printf("par[%d] = %d\n", i,array_even[i]);
	}
}
//O problema era so o indice do vetor que tava 4 em vez de 5
// ai quanto o vetor chegava no maximo ele começa a falhar e aparecer uns numero nada a ver.
// alem disso o j = recebendo zero na hora de verificar a condição de z tambem era um erro.
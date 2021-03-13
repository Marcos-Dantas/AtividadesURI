#include <stdio.h>

int main () {
	float M[12][12],sum=0;
	char O;
	int num=0,j=0;
	
	scanf("%c",&O); 
	
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			scanf("%f", &M[i][j]);
		}
	}
	for (int i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			if(j>i) {
				sum = sum + M[i][j];
				num++;
			}
		}
	}
	if(O == 'S') {
		printf("%.1f\n", sum);
	}else if(O == 'M'){
		printf("%.1f\n", sum/num);
	}
}
// 1 2 3 
// 4 5 6
// 7 8 9
//o erro era porque era pra ler apenas os que estão acima da diagonal principal 
// nao os numeros da diagonal, e tambem a media estava calculada de maneira errada.
//a media era dada pela soma / numero lidos nao por soma / 11.
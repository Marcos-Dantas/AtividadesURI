#include <stdio.h>

int main () {
	int N;
	
	do {
		scanf("%d", &N);
		if(N==0) break;
		int Max[N][N],i,j,x,y,e;
		
		for(i = 0; i < N; i++) {
			for(j = 0; j < N; j++) {
				Max[i][j]=1; 
			}
		}
		
		for(i=0,j=1,y=2; i<N-1; i++,y++,j++) {
			for(x=j,e=0; x<N; x++,e++) {
				Max[e][x] = y; 
			}
		}
		for(i=0,j=1,y=2; i<N-1;i++,y++,j++) {
			for(x=0,e=j; e<N; x++,e++) {
				Max[e][x] = y;
			}
		}
		for(i = 0; i < N; i++) {
			for(j = 0; j < N; j++) {
				if(j == 0) printf("%3d",Max[i][j]);
				else printf(" %3d",Max[i][j]);  
		   	}
		   printf("\n");
		}
		printf("\n");
	} while (N!=0);
}
//uma das maneiras de prencher a matriz da forma da atividade era, so 
//1.prencher a matriz inteira com 1
//2.prencher o triangulo de cima da matriz com 2 e 3
//3.prencher o triangulo de baixo da matriz com 2 e 3
//4.printar o resultado, de forma formatada com espaço nos indices <>zero

//meu erro era que alem de não saber como printar o resultado formatado da forma certa
//eu não consiguia prencher o meio da matriz de forma correta, apenas as colunas laterais.
// 1 2 3
// 2 2 2
// 3 2 1   
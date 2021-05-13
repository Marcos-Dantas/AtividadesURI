#include<stdio.h>

int main () {
	int N;
	
	while((scanf("%d", &N)) != EOF) {
	int Max[N][N],cont = N/3;
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			Max[i][j] = 0;
		}
	}
	for(int i = 0, j = 0; i < N; i++,j++) {
		Max[i][j] = 2;
	}
	for(int i = 0, j = N-1; i < N; i++,j--) {
		Max[i][j] = 3;
	}
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(i >= j && i < N-cont && j >= cont){
				Max[i][j] = 1;	
			}else if(i < j && i >= cont && j < N-cont) {
				Max[i][j] = 1;
			}
		}
	}
	if(N%2 == 1){
		Max[N/2][N/2] = 4;
	}
		
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			printf("%d",Max[i][j]);
		}
		printf("\n");
    }
	printf("\n");	
	}
}

/*
PASSOS:

-ler um valor inteiro ate EOF
-Precher uma matriz quadrada de N|N
-a parte de fora recebe 0, a parte de dentro recebe 1
-a diagonal principal recebe 2,e a secundaria recebe 3
- o centro da matriz recebe 4 
N/3
*/

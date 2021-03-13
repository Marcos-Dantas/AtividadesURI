#include <stdio.h>

int main () {
	int N;
	
	while(scanf("%d",&N) != EOF) {
	int Max[N][N],i,s;
	for(i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			Max[i][j]=3;
		}
	}
	for(i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(j == i) {
				Max[i][j] = 1;
			}
		}
	}
	
	for(i=0,s=N-1; i < N; i++,s--) {
		Max[i][s] = 2;
	}
	for(i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			printf("%d",Max[i][j]);
		}
		printf("\n");
	}
	}
}
/*
dessa fez foi facil porque eu dividi o problema em tarefas
o negocio de ler EOF eu não sei como funciona mais funcionou
EOF - e uma macro que indica o fim do arquivo ou o fim da linha, não sei
como interagi com o meu codigo mais funciona
*/
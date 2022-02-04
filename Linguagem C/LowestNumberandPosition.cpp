#include <stdio.h>

int main () {
	int N,menor,posicao;
	
	scanf("%d", &N);
	int X[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &X[i]);	
	}
	menor = X[0];
	for(int i = 0; i < N; i++) {
		if(X[i]<menor) {
			menor = X[i];
			posicao = i;
		}
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
}



//lembre-se na leitura dessa questao tinha :
//1 2 3 4 -5 6 7 8 9 10.. tudo de lado não quer dizer que vc tenha que 
//mandar essas entradas uma por uma e sim tudo de uma vez.
// o erro era que todo array e matriz precisa ser definido estaticamente para o programa separar a
//	memoria antes do uso.
//alem disso o array nao ordenava direito sem dividir duas variavais para posicao e valor.
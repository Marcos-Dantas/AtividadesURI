#include <stdio.h>

int main () {
	int N;
	
	do {
		scanf("%d", &N);
		if(N == 0) {
			break;
		}
		int Max[N][N];
		int cont=1,z=0,x=-1;
		
		while (cont != 0) {
		cont = 0;
		z++;
		x++;
		for(int i = x; i < N-x; i++) {
			for(int j = x; j < N-x; j++) {
				if(i == x || i == N-z || j == x || j == N-z) {
					Max[i][j] = z;
				}else {
					cont++;
				} 
			}
		}
		
		}
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				if(j==0) 
					printf("%3d", Max[i][j]);
				else 
					printf(" %3d", Max[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
	} while(N!=0);
}
//o erro era que alem de ter que construir uma matriz bidimensional mesmo e prenche-la
//a condição de colocar os valores era simples bastava pensar
//em prencher os valores que não eram da metade da linha
//a logica parece estar certa, mas tem algum problema em relação a o jeito que eu uso a matriz
//CONFIRMADO LOGICA ERRADA, os valores que prenchem a metade de uma matriz bidimensional
//precisam crescer a medida que o tamanho do array cresça tipo:
// 1 == 1	
// 2 == 1	
// 3 == 2
// 4 == 2
// 5 == 3
// 6 == 3
// 7 == 4
// 8 == 4
// 9 == 5
// 10 = 5
//e complicado porque tem que ter varias matrizes crescendo dentro de outras matrizes
/* 
CONSEGUI!!! UURUUUUU!!! o negocio era fazer adicionar 1 as extremidades da matriz e verificar
se ainda existia lugares vazios, se sim substituiria apenas os valores vazios ou seja, diminuindo
a procura pela matriz atraves da condição i == x ate i == N-x e j == x ate j == N-x, onde x era
os indices que não estavam prenchidos ainda. x no caso aumentaria seu valor toda vez que verificase
que ainda existia espaços vazios e "z" ajudava o "x" diminuindo a procura atraves da condição i == N-z.
PORRAAAAA!!! DROGA!! de erro de apresentação e foda.
ERRO de apresentação era so ter a opção de sair direto quando o N == 0; 							

#include <stdio.h>

int main(){
    int n, cont = 0;
    while(n != 0){
        scanf("%d", &n);
        if(n == 0){
            break;
            }
        int i;
        int j;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if((i >= j && i < n/2)  (i+j < n && i >= n/2)){
                    cont += 1;
                }
                else if((i + j > n-1 && i<n/2)  (j > i && i >= n/2)){
                    cont -= 1;
                }
                if(j != 0){
                    printf(" ");
                    }
                printf("%3d", cont);

                }
            printf("\n");
            cont = 0;
            }
            printf("\n");

        }
    return 0;
}
exemplo do kenedy
*/							

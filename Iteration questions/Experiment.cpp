#include <stdio.h>
#include <string.h>

int main(){
	
	int N,Amount,all;
	char C[80],T;
	float PercR,PercS,PercC,allC,allS,allR;
	PercR = PercS = PercC = all = allC = allS = allR = 0;
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %c", &Amount,&T);
		C[0] = T;
		all+=Amount;
		if(!strcmp(C,"C"))
			allC+=Amount;
		else if(!strcmp(C,"S")) 
			allS+=Amount;
		else if(!strcmp(C,"R")) 
			allR+=Amount; 
	}
	PercR = allR*10/all*10;
	PercS = allS*10/all*10;
	PercC = allC*10/all*10;
	printf("Total: %d cobaias\n", all);
	printf("Total de coelhos: %.0f\n", allC);
	printf("Total de ratos: %.0f\n", allR);
	printf("Total de sapos: %.0f\n", allS);
	printf("Percentual de coelhos: %.2f %%\n", PercC);
	printf("Percentual de ratos: %.2f %%\n", PercR);
	printf("Percentual de sapos: %.2f %%\n", PercS);
// a função strcmp e usada apenas para comparação de strings.
//o maior erro foi que na comparação de apenas um caractere char usa-se aspas simples, aspas
//duplas so sao usadas em strings, por isso eu errei. 
//o codigo foi aceito mas, eu acebei usando funcoes desnecessarias para um problema simples.
// o certo seria ....
/*

#include <stdio.h>

int main() {
	
	int N,Amount,all;
	char T;
	float PercR,PercS,PercC,allC,allS,allR;
	PercR = PercS = PercC = all = allC = allS = allR = 0;
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %c", &Amount,&T);
		all+=Amount;
		if(T =='C')
			allC+=Amount;
		else if(T =='S') 
			allS+=Amount;
		else if(T =='R') 
			allR+=Amount; 
	}
	PercR = allR*10/all*10;
	PercS = allS*10/all*10;
	PercC = allC*10/all*10;
	printf("Total: %d cobaias\n", all);
	printf("Total de coelhos: %.0f\n", allC);
	printf("Total de ratos: %.0f\n", allR);
	printf("Total de sapos: %.0f\n", allS);
	printf("Percentual de coelhos: %.2f %%\n", PercC);
	printf("Percentual de ratos: %.2f %%\n", PercR);
	printf("Percentual de sapos: %.2f %%\n", PercS);
}


*/
}
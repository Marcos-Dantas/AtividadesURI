#include <stdio.h>
#include <math.h>

int main() {
	int A=0,B,C;
	double area;
	
	while(1) {
	
	scanf("%d",&A);
	if(A == 0) break;  
	scanf("%d %d",&B,&C);
	
	area = floor(sqrt(( A * B ) / ( C/100.0 )));	
	printf("%.0f\n", area);
	} 
}
/*
calculo de area da casa permitida:

area X area = areatotal
porcentagem permitida = 100/porcentagem permitida
t.terreno = raiz quadrada/areatotal X porcentagem

obs: Mesmo não prenchendo os valores diretamente na leitura das variaveis 
no algoritmo, o buffer guarda o valor digitado para ser inserido em outra variavel.
o grande erro era que nos testes tava dando erro em alguns casos como 800 30 10;

*/
//era simplesmente uma regra de 3, 
// area total ----- porcentagem permitida
//area*porc.p ----- 100%

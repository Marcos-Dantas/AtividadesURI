#include <stdio.h>

int main () {
	int a,b,q,r,aux,aux2;
	
	scanf("%d %d", &a,&b);
	
	if(a < 0) {
		r = 0;
		aux = b;
		if(b < 0) aux = b*-1;
		while(r < aux) {
			aux2 = a - r;
			if(aux2 % b == 0) break;
			r++;
		}
		q = aux2 / b;
		printf("%d %d\n", q, r);

	}else {
		printf("%d %d\n", a/b, a%b);
	}
	
	return 0;
}
//conta de menos com numero negativo
// a and b>0 there exist q and r such that a=qb+r and 0<= r < b.
// precisa de uma maneira de calcular numeros negativos, era so
//iterar o valor de r, ate encontrar o q necessario para uma divisão certa
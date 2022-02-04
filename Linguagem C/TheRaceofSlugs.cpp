#include <stdio.h>

int main () {
	int L,V,maior=0;
	
	while((scanf("%d", &L)) != EOF) {
		maior = 0;
		for(int i = 0; i < L; i++) {
			scanf("%d",&V);
			if(V > maior) {
				maior = V;
			}
		}
		if(maior < 10) {
			printf("1\n");
		}else if(maior >= 10 && maior < 20) {
			printf("2\n");
		}else if(maior >=20){
			printf("3\n");
		}
	}
	return 0;
}
#include <stdio.h>

int main () {
	int PA,PB,T,years;
	float G1,G2,GrowthA,GrowthB,rateA=0,rateB=0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
	    scanf("%d %d %f %f", &PA,&PB,&G1,&G2);
	    years = 0;
		GrowthA = PA;
	    GrowthB = PB;
	    rateA = (100+G1)/100;
 	    rateB = (100+G2)/100;	
	    while(GrowthA<=GrowthB+1) {
			GrowthA = (int)GrowthA*rateA;
			GrowthB = (int)GrowthB*rateB;
			years++;
			if(years>100) break; 
		}
	if(years>100) 
		printf("Mais de 1 seculo.\n");
	else	
		printf("%d anos.\n", years);
	}	
}
// a dificuldade dessa era o calculo da variacao da taxa com a população que era:
// PA*(100+taxaA)/100 ou PB*(100+taxaB)/100
// e adiciona 1 a PB.
#include <stdio.h>

int main(){
	asdasd
	int N=0;
	
	scanf("%i",&N);
	if((N>0) && (N<100000)){
		
		printf("%i\n",N);
		printf("%i nota(s) de R$ 100,00\n",N/100);
		printf("%i nota(s) de R$ 50,00\n",(N%100)/50);
		printf("%i nota(s) de R$ 20,00\n",(((N%100)%50)/20));
		printf("%i nota(s) de R$ 10,00\n",((((N%100)%50)%20)/10));
		printf("%i nota(s) de R$ 5,00\n",(((((N%100)%50)%20)%10)/5));
		printf("%i nota(s) de R$ 2,00\n",(((((N%100)%50)%20)%10)%5)/2);
		printf("%i nota(s) de R$ 1,00\n",((((((N%100)%50)%20)%10)%5)%2)/1);
		
	}
	
}
/*
		cen = N/100;
		cinquen = (N%100)/50);
		vinte = (((N%100)%50)/20)
		dez =  ((((N%100)%50)%20)/10)
		cinco = ((((N%100)%50)%20)/5)
		um = (((((N%100)%50)%20)%5)/1)
*/
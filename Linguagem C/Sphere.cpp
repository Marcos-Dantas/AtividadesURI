#include<stdio.h>


int main(){

//quando o calculo e entre inteiros normalmente o resultado
//tambem e inteiro.		
	double R,pi = 3.14159;
	double total;
	total = R = 0;
	
	scanf("%lf",&R);
	R = R*R*R;
	total = (4.00/3.00)*pi*R; 
	printf("VOLUME = %.3lf\n",total);
}
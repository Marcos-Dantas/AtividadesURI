#include <stdio.h>
#include <stdlib.h>//abs needs this library

int main(){
	
	int menorAB,menorABC,A,B,C;
    A = B = C = menorAB = menorABC = 0;
	scanf("%i %i %i",&A,&B,&C);
	menorAB = (A+B+abs(A-B))/2;
	menorABC = (menorAB+C+abs(menorAB-C))/2;
	printf("%i eh o maior\n",menorABC); 
	
}
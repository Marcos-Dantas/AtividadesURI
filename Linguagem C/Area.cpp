#include <stdio.h>

int main(){
	
	double A,B,C,total;
	A = B = C = total = 0;
	
	scanf("%lf %lf %lf",&A,&B,&C);
	printf("TRIANGULO: %.3lf",total=A*C/2);
	printf("\nCIRCULO: %.3lf\n",total=3.14159*C*C);
	printf("TRAPEZIO: %.3lf\n",total=(A+B)*C/2);
	printf("QUADRADO: %.3lf\n",total=B*B);
	printf("RETANGULO: %.3lf\n",total=A*B);
	
}
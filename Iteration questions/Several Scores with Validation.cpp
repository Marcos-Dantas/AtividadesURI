#include <stdio.h>

int main () {
	
	double num,tot=0;
	int i=0,X;
	
	do {
		scanf("%lf", &num);
		if ((num>=0) && (num<=10))	{
		i+=1;
		tot+=num;
		if (i==2) {
			printf("media = %.2lf\n", tot/2);
			i = 0;
			tot = 0;
			do {
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &X);
			} while ((X<1) || (X>2));
		}
		}else 
			printf("nota invalida\n");	
	} while (X!=2);
	return 0;
}
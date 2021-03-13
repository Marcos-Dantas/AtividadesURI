#include <stdio.h>

int main () {
	float num,tot=0;
	int i=0;
	do {
		scanf("%f", &num);
		if ((num>=0) && (num<=10))	{
			tot+=num;
			i+=1;
		}else 
			printf("nota invalida\n");
			
	} while (i!=2);
	printf("media = %.2f\n", tot/2);
	return 0;
}
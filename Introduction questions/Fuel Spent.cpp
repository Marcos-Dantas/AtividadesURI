#include <stdio.h>

int main(){
	
	int horas,vmedia;
	float total;
	total = horas = vmedia = 0;
	
	scanf("%d %d",&horas,&vmedia);
	total = (horas*vmedia)/12.0;
	printf("%.3f\n",total);
	
	
	
}
#include <stdio.h>

int main(){
	
	char nome[20];
	double salaryF,salaryT,Total;
	salaryF = salaryT = Total = 0;
	scanf("%s %lf %lf",nome,&salaryF,&salaryT);
	Total = salaryT*0.15;
	Total = Total+salaryF;
	printf("TOTAL = R$ %.2lf\n",Total);
	
	
	
}
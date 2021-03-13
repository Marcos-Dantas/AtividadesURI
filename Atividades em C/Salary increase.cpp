#include<stdio.h>



int main(){
	
	float num;
	
	scanf("%f",&num);
	
	if((num>=0) && (num<=400)){
		printf("Novo salario: %.2f\n",(num*0.15)+num);
		printf("Reajuste ganho: %.2f\n",(num*0.15));
		printf("Em percentual: 15 %%\n");
	}else if((num>=400.01) && (num<=800)){
		printf("Novo salario: %.2f\n",(num*0.12)+num);
		printf("Reajuste ganho: %.2f\n",(num*0.12));
		printf("Em percentual: 12 %%\n");	
	}else if((num>=800.01) && (num<=1200)){
		printf("Novo salario: %.2f\n",(num*0.10)+num);
		printf("Reajuste ganho: %.2f\n",(num*0.10));
		printf("Em percentual: 10 %%\n");	
	}else if((num>=1200.01) && (num<=2000)){
		printf("Novo salario: %.2f\n",(num*0.07)+num);
		printf("Reajuste ganho: %.2f\n",(num*0.07));
		printf("Em percentual: 7 %%\n");	
	}else if(num>=2000.01){
		printf("Novo salario: %.2f\n",(num*0.04)+num);
		printf("Reajuste ganho: %.2f\n",(num*0.04));
		printf("Em percentual: 4 %%\n");	
	}
	
	
	
}
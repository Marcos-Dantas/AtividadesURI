#include <stdio.h>


int main(){
	double A,B,C,aux;
	
	scanf("%lf %lf %lf",&A,&B,&C);
	if((A>0) && (B>0) && (C>0)){
		if((B>A) && (B>C)){
	  		aux = A;
		   	A = B;
			B = aux;   	
	  	}else if((C>A)&& (C>B)){
    	    aux = A;
		   	A = C;
		   	C = aux;   	   	
	   	}
		if(A>=(B+C)){
			printf("NAO FORMA TRIANGULO\n");   	
		}else{
	    	if((A*A)==((B*B)+(C*C)))
				printf("TRIANGULO RETANGULO\n");	
			if((A*A)>((B*B)+(C*C)))
				printf("TRIANGULO OBTUSANGULO\n");	
			if((A*A)<((B*B)+(C*C)))
				printf("TRIANGULO ACUTANGULO\n");	
			if((A==B) && (B==C))
				printf("TRIANGULO EQUILATERO\n");	
			else if(((A==B) && (A!=C)) || ((A==C) && (A!=B)))
				printf("TRIANGULO ISOSCELES\n");
			else if(((B==A) && (B!=C)) || ((B==C) && (B!=A)))
			 	printf("TRIANGULO ISOSCELES\n");
			else if(((C==B) && (C!=A)) || ((C==A) && (C!=B)))
				printf("TRIANGULO ISOSCELES\n");
		}	
	}else
	
	return 0;
}
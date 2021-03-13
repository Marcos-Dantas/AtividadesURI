#include<stdio.h>


int main(){	
	double p = 3.14159,raio,area;
	
	scanf("%lf",&raio);
	area = p*raio*raio;
	printf("A=%.4lf\n",area);
    
}

/*
	O erro era so na digitação com "A=" tudo junto.
	Para fazer um truncamento ou seja arrendodar
	  qualquer numero para baixo basta usar a função: 
	  => floor Ex: double x = floor(5.8)
	  Para arrendodar para cima use a função:
	  =>ceil Ex: double x = ceil(5.2)
	  REsul = 31819.3103
      	  	  31819.3099
	 Procurar um jeito de arredondar os numeros<==
 	 Na verdade o erro era so ajeitar o formato do scanf de double que no caso 
 	 e = lf
	 potencia = pow(x,2); //elevando o valor de x ao quadrado
     double A = p*pow(R,2);  
*/	
 

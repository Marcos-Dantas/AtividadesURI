/* 
engraçado quando eu faço com scanf da tempo limite essedido, quando eu faço com gets ele da codigo não 
declarado. 
100 % de erro pelo menos leu agora,depois da 20 % e complicado 
O erro era da porra do site mesmo, que n�o conseguia ler o gets no c++13,  
foi so botar no c++ que deu certo aff.
*/
#include <stdio.h>
#include <string.h>
// contar numeros binarios e transformar em decimais 

int main () {
	char var[10];
	int num,R,tot;
	
	R = 0;
	tot = 0;
	while(R != 3) {
		gets(var);
		num = 8;
		if(!strcmp(var, "--*")) {
			num = 1;
		}else if(!strcmp(var, "-*-")) {
			num = 2;
		}else if(!strcmp(var, "-**")) {
			num = 3;
		}else if(!strcmp(var, "*--")) {
			num = 4;
		}else if(!strcmp(var, "*-*")) {
			num = 5;
		}else if(!strcmp(var, "**-")) {
			num = 6;
		}else if(!strcmp(var, "***")) {
			num = 7;
		}else if(!strcmp(var,"---")) {
			num = 0;
		}
		
		if(!strcmp(var, "caw caw")) {
			R++;
			printf("%d\n", tot);
			tot = 0;
			continue;
		}
		tot+=num;
	}
}
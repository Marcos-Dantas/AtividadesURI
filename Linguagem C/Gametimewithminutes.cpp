#include <stdio.h>


int main(){
	
	int h1,m1,h2,m2;
	
	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
	if(((h1<24) && (h2<24)) && ((m1>=0) && (m2>=0))){
		if((h1<=h2) && (m1<m2))
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1,m2-m1);
		else if((h1<h2) && (m1>m2))
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(h2-h1)-1,(60-m1)+m2);
		else if((h1<h2) && (m1==m2))
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1,m2-m1);
		else if((h1==h2) && (m1==m2)) 
	 		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		else if((h1>=h2) && (m1>m2))  
	 		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-h1+h2)-1,(60-m1)+m2);
		else
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-h1+h2),m2-m1);	
	}else;
/*
	observações de dificuldade:
	1) não precisa colocar m1 e m2 < que 60
	2) o primeiro if era <=
	3)bastava um conjunto de 6 if-else:
	--3 para buscar numeros com a hora inicial menor que a final
	--2 para buscar numeros com a hora inicial maior que a final
	4)o primeiro if tinha que se <= pois ele pegaria os casos normais.ex:
		10 35 a 10 40 -- 12 20 a 18 30
	5) o segundo if pegava os casos onde os minutos eram maiores como:
		9 20  a 10 10 -- 11 40 a 20 25   
	6) o terceiro if pegava os casos onde os minutos eram iguais,casos faceis:
		8 20  a 9 20  -- 22 30 a 23 30
	7) o quarto era no caso de horas iguais onde se passava 24 horas exatas
	8) o quinto if tinha que se >= pois ele pegaria casos mais complexos como:
        10 20 a 9 09 -- 10 20 a 10 10
	9) o ultimo if pegaria todos os casos que sobram ou seja, que a hora inicial
		e maior que a final e os minutos sao menores ou iguais aos finais.	   	
		11 10 a 10 20 , 18 23 a 6 25, 22 50 a 21 55
*/
}
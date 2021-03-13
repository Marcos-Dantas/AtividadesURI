#include<stdio.h>

int main()
{
	int d1,d2,h1,h2,m1,m2,s1,s2,tot=0;
	char x[4],y[2];
	
	scanf("%s %d",x,&d1);
	scanf("%d %s %d %s %d",&h1,y,&m1,y,&s1);
	scanf("%s %d",x,&d2);
	scanf("%d %s %d %s %d",&h2,y,&m2,y,&s2);
	
	tot = (60-s1+s2)+((60-m1-1+m2)*60)+((24-1-h1+h2)*3600)+((d2-d1-1)*86400);
	
	printf("%d dia(s)\n",tot/86400);
	printf("%d hora(s)\n",((tot%86400)/3600));
	printf("%d minuto(s)\n",((tot%86400)%3600)/60);
	printf("%d segundo(s)\n",((tot%86400)%3600)%60);
	return 0;
	
/*
	criar uma entrada que recebe-se strings
	calcular o valor total de horas,minutos,segundos e dias
	dividir o valor total pela a quantidade de horas,minutos,segundos e dias em 1 dia	
	valor total = segundos*1+minutos*60+horas*3600+dias*86400	
    depois e so dividir o total pela quantidade de segundos em um dia atraves da tabela;
	1 day = 24 hour * 60 minutes * 60 seconds => 86400 seconds
	1 hour = 60 minutes * 60 seconds => 3600 seconds
	1 minute => 60 seconds
	1 second => 1 second =>nada
    a entrada era so receber alem dos valores de dia e horas,as strings que 
	fazem parte do exemplo de entrada. dia ,: : : 
*/   
}
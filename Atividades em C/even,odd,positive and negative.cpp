#include <stdio.h>


int main(){
	int num,pos,even,odd,neg;
	pos = even = odd = neg = 0;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			even+=1;
		}else
		{
			odd+=1;
		}
		if(num>0)
		{
			pos+=1;
		}
		if(num<0)
		{
			neg+=1;
		}
	}
	printf("%d valor(es) par(es)\n",even);
	printf("%d valor(es) impar(es)\n",odd);
	printf("%d valor(es) positivo(s)\n",pos);
	printf("%d valor(es) negativo(s)\n",neg);	
	
}
#include <stdio.h>


int main()
{
	float num,tot;
	int positive;
	positive = tot = 0;
	
	for(int i=0; i<6; i++)
	{
		scanf("%f",&num);
		if(num>=1)
		{
			positive+=1;
			tot+=num;
		}   	
	}
	printf("%d valores positivos\n",positive);
	printf("%.1f\n",tot/positive);
	
	
	
	
	
	
	
	
	
}
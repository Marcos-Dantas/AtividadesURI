#include <stdio.h>


int main()
{
	int X,N,in,out;
	in = out = 0;
	
	scanf("%d",&N);
	
	for(int i = 0; i < N;i++)
	{
		scanf("%d",&X);
		if((X>=10) && (X<=20)){
			in+=1;
		}else{
			out+=1;
		}
	}
	printf("%d in\n",in);
	printf("%d out\n",out);	
	
}
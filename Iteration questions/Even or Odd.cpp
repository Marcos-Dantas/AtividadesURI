#include <stdio.h>


int main()
{
	int N,X[80];
	
	scanf("%d",&N);
	for(int i = 1; i <= N; i++)
	{	
		scanf("%d",&X[i]);		
	}
	for(int i = 1; i <= N; i++)
	{	
	
	if((X[i]%2==0) || (X[i]%2==-0)){
			if(X[i]>0)
				 printf("EVEN POSITIVE\n");
			else if(X[i]<0)
				printf("EVEN NEGATIVE\n");
			else
				printf("NULL\n");
	}else if((X[i]%2==1) || (X[i]%2==-1)){
			if(X[i]>0)
				printf("ODD POSITIVE\n");
			else if(X[i]<0)
				printf("ODD NEGATIVE\n");	
	}
	}
}
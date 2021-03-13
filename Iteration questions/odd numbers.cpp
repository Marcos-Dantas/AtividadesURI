#include <stdio.h>


int main()
{
	   int num;
	   
	   scanf("%d",&num);
	   if((num>0) && (num<1000)){
          for( int i = 0; i <= num; i++)
		  {
			  if(i%2==1)
			  	printf("%d\n",i);  
		  }	
	   }else;

}
#include <stdio.h>


int main()
{
	   int num,odd;
	   odd = 0;
	   
	   scanf("%d",&num);
	   
       while(odd<6)
	   {
		 if(num%2==1)
		 {
			 printf("%d\n",num);
			 odd = odd+1;
		 }
		 num++; 
	   }	  	   
	
}
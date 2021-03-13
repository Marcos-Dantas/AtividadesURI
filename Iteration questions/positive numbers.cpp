#include <stdio.h>


int main(){
	
	float num,positive;
	
	positive=0;
	for(int i=0;i<=5;i++){
		scanf("%f",&num);
		if(num>0)positive+=1;
	}
	printf("%.0f valores positivos\n",positive);
		
	
	
}
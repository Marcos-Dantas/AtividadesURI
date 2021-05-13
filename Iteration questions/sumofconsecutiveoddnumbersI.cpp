#include <stdio.h>


int main(){
	
	int x,y,odd=0;
	
	scanf("%d %d",&x,&y);

	if(x>y){
		for (x = x-1;x>y;x--){
			if((x%2==1) || (x%2==-1)) {
			   odd+=x;
			}
		}
	}else{ 
		odd = 0;
	} 
	   printf("%d\n",odd);	
	
	
	
	
	
}
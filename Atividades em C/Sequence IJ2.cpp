
#include <stdio.h>

int main () {
	
	int num=1;
	
	 while (num<=9){
	  for ( int j = 0, N = 7; j < 3; j++,N--) {//duas variaveis controlando o laço
          printf("I=%d J=%d\n", num,N);	  
	  }
	  num+=2; 
	}
	return 0;
	
	
}
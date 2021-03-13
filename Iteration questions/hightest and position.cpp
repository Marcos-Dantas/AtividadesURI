#include <stdio.h>

int main()
{
	int num,high,pos;
	high = pos = 0;
	
	for (int i = 1; i <= 100; i++){
		scanf("%d", &num);
		if(high<num){
			high = num;
			pos = i;	  		
		}
	}
	printf("%d\n", high);
	printf("%d\n", pos);
	return 0;
}
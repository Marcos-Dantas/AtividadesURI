#include <stdio.h>


int main(){
	
	int n1,n2;
	
	scanf("%d %d",&n1,&n2);
	
	if(n1>n2)
		printf("O JOGO DUROU %i HORA(S)\n",(24-n1)+n2);
	else if(n1<n2)
		printf("O JOGO DUROU %i HORA(S)\n",n2-n1);
	else
		printf("O JOGO DUROU 24 HORA(S)\n");
	return 0;
}
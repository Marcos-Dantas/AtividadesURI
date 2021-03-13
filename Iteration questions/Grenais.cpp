#include <stdio.h>

int main () {
	int X,numI,numG,totI,totG,draw,i,wonI,wonG;
	totI = totG = draw = i = wonI = wonG = 0;
	
	do {
		scanf("%d %d", &numI,&numG);
	  	i+=1;
		if (numI>numG)
			totI+=1;
		else if (numI<numG) 
			totG+=1;
		else 
			draw+=1;
		if (totI>totG)
			wonI+=1;
		else
			wonG+=1;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &X);
		
	} while (X!=2);
	printf("%d grenais\n", i);
	printf("Inter:%d\n", totI);
	printf("Gremio:%d\n", totG);
	printf("Empates:%d\n", draw);
	if (wonI>wonG)
		printf("Inter venceu mais\n");
	else if (wonI<wonG)
		printf("Gremio venceu mais\n");
	else 
		printf("Nao houve vencedor\n");
}
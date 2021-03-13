#include <stdio.h>

int main(){
	
	int codigo,num_unidade,codigo2,num_unidade2;
	float preco_unidade,preco_unidade2,total;
    
	codigo = num_unidade = preco_unidade = total = 0;
	codigo2 = num_unidade2 = preco_unidade2 = 0;
	
	scanf("%i %i %f",&codigo,&num_unidade,&preco_unidade);
	scanf("%i %i %f",&codigo2,&num_unidade2,&preco_unidade2);
	
	preco_unidade = num_unidade*preco_unidade;
    preco_unidade2 = num_unidade2*preco_unidade2;
    total = preco_unidade+preco_unidade2;
	printf("VALOR A PAGAR: R$ %.2f\n",total);


}
#include<stdio.h>
#include<string.h>

int main(){
	
	char type1[60],type2[60],type3[60];
	
	scanf("%s",type1);
	scanf("%s",type2);
	scanf("%s",type3);

	if(!strcmp( type1,"vertebrado")){
		if(!strcmp( type2,"ave")){
			if(!strcmp( type3,"onivoro")){
				printf("pomba\n");
			}else
				printf("aguia\n");		
		}else{
			if(!strcmp( type3,"onivoro")){
				printf("homem\n");
			}else
				printf("vaca\n");		
		}
	}else{
		if(!strcmp( type2,"inseto")){
			if(!strcmp( type3,"hematofago")){
				printf("pulga\n");
			}else
				printf("lagarta\n");		
		}else{
			if(!strcmp( type3,"hematofago")){
				printf("sanguessuga\n");
			}else
				printf("minhoca\n");		
		}
	}
} 
	
//	(!strcmp( type1, "vertebrado")
// essa e a fun��o que compara uma string com outra e o sinal ! e para
//for�ar a leitura da proxima condi��o, pois se o valor das strings s�o iguais
//a fun��o retorna zero.
//o certo era usar poucas linhas e poucos ifs ja que cada pergunta so tem 2 repostas
// o if e o else.	
	
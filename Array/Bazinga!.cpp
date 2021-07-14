#include <stdio.h>
#include <string.h>

int main () {
	int t;
	char escolhaR[10],escolhaS[10];
	
	scanf("%d",&t);
	for(int i = 0; i < t; i++) {
		scanf("%s %s", escolhaS,escolhaR);
		if(!strcmp(escolhaS,"pedra") && !strcmp(escolhaR,"lagarto")) {
			printf("Caso #%d: Bazinga!\n", i+1);		
		}else if(!strcmp(escolhaS,"pedra") && !strcmp(escolhaR,"tesoura")) {
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(!strcmp(escolhaS,"pedra") && !strcmp(escolhaR,"papel")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,"pedra") && !strcmp(escolhaR,"Spock")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,"papel") && !strcmp(escolhaR,"pedra")) {
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(!strcmp(escolhaS,"papel") && !strcmp(escolhaR,"Spock")) {
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(!strcmp(escolhaS,"papel") && !strcmp(escolhaR,"tesoura")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,"papel") && !strcmp(escolhaR,"lagarto")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,"tesoura") && !strcmp(escolhaR,"papel")) {
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(!strcmp(escolhaS,"tesoura") && !strcmp(escolhaR,"lagarto")) {
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(!strcmp(escolhaS,"tesoura") && !strcmp(escolhaR,"pedra")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,"tesoura") && !strcmp(escolhaR,"Spock")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,"lagarto") && !strcmp(escolhaR,"Spock")) {
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(!strcmp(escolhaS,"lagarto") && !strcmp(escolhaR,"papel")) {
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(!strcmp(escolhaS,"lagarto") && !strcmp(escolhaR,"pedra")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,"lagarto") && !strcmp(escolhaR,"tesoura")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,"Spock") && !strcmp(escolhaR,"tesoura")) {
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(!strcmp(escolhaS,"Spock") && !strcmp(escolhaR,"pedra")) {
			printf("Caso #%d: Bazinga!\n", i+1);
		}else if(!strcmp(escolhaS,"Spock") && !strcmp(escolhaR,"lagarto")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,"Spock") && !strcmp(escolhaR,"papel")) {
			printf("Caso #%d: Raj trapaceou!\n", i+1);
		}else if(!strcmp(escolhaS,escolhaR)) {
			printf("Caso #%d: De novo!\n", i+1);
		}
	
	}
	
	
	
	
	
}
//pedra, papel, tesoura, lagarto e Spock
//so preciso numerar as op��es
//o site vai prencher as respostas
/*
scissors cuts paper;
paper covers rock;
rock crushes lizard;
lizard poisons Spock;
Spock smashes scissors;
scissors decapitates lizard;
lizard eats paper;
paper disproves Spock;
Spock vaporizes rock;
rock crushes scissors.

*/
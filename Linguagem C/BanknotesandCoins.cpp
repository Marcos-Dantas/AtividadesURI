#include<stdio.h>

int main(){
        float N;
        int inteira,Fracao;
        
        scanf("%f",&N);
        if((N>=0) && (N<=100000000)){
        inteira = N;
        Fracao = ((N-inteira)*100+00.1);
        
        printf("NOTAS:\n");
        printf("%i nota(s) de R$ 100.00\n",inteira/100);
        printf("%i nota(s) de R$ 50.00\n",(inteira%100)/50);
        printf("%i nota(s) de R$ 20.00\n",((inteira%100)%50)/20);
        printf("%i nota(s) de R$ 10.00\n",(((inteira%100)%50)%20)/10);
        printf("%i nota(s) de R$ 5.00\n",((((inteira%100)%50)%20)%10)/5);
        printf("%i nota(s) de R$ 2.00\n",(((((inteira%100)%50)%20)%10)%5)/2);
        printf("MOEDAS:\n");
        printf("%i moeda(s) de R$ 1.00\n",((((((inteira%100)%50)%20)%10)%5)%2)/1);
        printf("%i moeda(s) de R$ 0.50\n",Fracao/50);
        printf("%i moeda(s) de R$ 0.25\n",(Fracao%50)/25);
        printf("%i moeda(s) de R$ 0.10\n",((Fracao%50)%25)/10);
        printf("%i moeda(s) de R$ 0.05\n",(((Fracao%50)%25)%10)/5);
        printf("%i moeda(s) de R$ 0.01\n",((((Fracao%50)%25)%10)%5)/1);
        }
  
}
//para retirar a parte fracionada de um numero em float basta:
//dividir o numero ja em (numero_normal-numero_inteiro)*100+00.1
//para transformar a parte fracionaria em inteiro de novo bastar
//criar outra variavel e colocar nela a fracao+00.1;
        
#include<stdio.h>

int main(){
    int X,Y;
    int Hot_dog = 1,X_Salad = 2,X_bacon = 3,Simple_toast = 4,Soda = 5;
    float total;
    scanf("%i %i",&X,&Y); 
    if(X==1)
        total = Y*4.00;
    else if(X==2)
        total = Y*4.50;            
    else if(X==3)
        total = Y*5.00;
    else if(X==4)
        total = Y*2.00;
    else if(X==5)
        total = Y*1.50;
    printf("Total: R$ %.2f\n",total);            

}
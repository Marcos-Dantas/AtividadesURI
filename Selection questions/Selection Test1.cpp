#include<stdio.h>

int main(){
//nao era escadinha de if-if
    int A,B,C,D,SumCD,SumAB;

    scanf("%d %d %d %d",&A,&B,&C,&D);
    SumCD = C+D;
    SumAB = A+B;
    if ((B>C) && (D>A) && (SumCD>SumAB) && (C>0) && (D>0) && (A>0))
        printf("Valores aceitos\n");    
    else
        printf("Valores nao aceitos\n");   




}
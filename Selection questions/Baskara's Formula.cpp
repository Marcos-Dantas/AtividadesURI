#include<stdio.h>
#include<math.h>

int main(){
    float A,B,C,R1,R2,raiz;
//formula de baskara -b raiz quadrada de (b^2 - 4*A*C)dividido por 2*A
    scanf("%f %f %f",&A,&B,&C); 
    raiz = sqrt(B*B-(4*A*C));
    if((A!=0) && (raiz>0)){
         R1 = ((-B)+sqrt(B*B-(4*A*C)))/(2*A);
         R2 = ((-B)-sqrt(B*B-(4*A*C)))/(2*A);
         printf("R1 = %.5f\n",R1);
         printf("R2 = %.5f\n",R2);
    }else
        printf("Impossivel calcular\n"); 

}
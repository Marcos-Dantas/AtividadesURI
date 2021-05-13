#include <stdio.h>

int main () {
    int A,B,C,aux_1_2,aux_3_2;

    scanf("%d %d %d", &A,&B,&C);
    aux_1_2 = B-A;
    aux_3_2 = C-B;
    
    if(B < A && C >= B) {
        printf(":)\n");
    }else if(B > A && C <= B) {
        printf(":(\n");
    }else if(B > A && C > B && aux_3_2 > 0 && aux_1_2 > 0) { 
            if(aux_3_2 < aux_1_2) {
                printf(":(");
            }else { 
                printf(":)");    
            }  
    }else if(B < A && C < B && aux_3_2 < 0 && aux_1_2 < 0) {
            if(aux_3_2 > aux_1_2) {
                printf(":)");
            }else { 
                printf(":(");    
            }
    }else if(A == B) {
        if(C > B) {
            printf(":)");
        }else {
            printf(":(");
        }    
    }
/*

b - a = aumentou
50 - 20 = 30
20 - 50 = -30
*/

}
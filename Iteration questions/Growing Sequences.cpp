#include <stdio.h>

int main () {
	int X,cont=0;
	
	while (X!=0) {
       scanf("%d", &X);
       cont = 0;
		if (X!=0) {
          while (cont<X) { 
			printf("%d",cont+=1);
            if (cont<X) printf(" ");
 	      }
	    printf("\n");
       } 	
	} 
}

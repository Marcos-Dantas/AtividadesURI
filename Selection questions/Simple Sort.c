#include<stdio.h>



int main(){
	
	int n1,n2,n3;
	
	scanf("%i %i %i",&n1,&n2,&n3);
	if((n1<n2) && (n1<n3)){
		if(n2<n3){
			printf("%i\n",n1);
			printf("%i\n",n2);
			printf("%i\n",n3);
		}else{
			printf("%i\n",n1);
			printf("%i\n",n3);
			printf("%i\n",n2);
		}
	}else if((n2<n1) && (n2<n3)){
		if(n1<n3){
			printf("%i\n",n2);
			printf("%i\n",n1);
			printf("%i\n",n3);
		}else{
			printf("%i\n",n2);
			printf("%i\n",n3);
			printf("%i\n",n1);
		}
	}else if((n3<n2) && (n3<n1)){
		if(n2<n1){
			printf("%i\n",n3);
			printf("%i\n",n2);
			printf("%i\n",n1);
		}else{
			printf("%i\n",n3);
			printf("%i\n",n1);
			printf("%i\n",n2);
		}
	}
	printf("\n");
	printf("%i\n",n1);
	printf("%i\n",n2);
	printf("%i\n",n3);
	return 0;
}
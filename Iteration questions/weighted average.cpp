#include <stdio.h>


int main()
{
	int N;
	float N1,N2,N3;
	
	scanf("%d", &N);
	float M[N];
	
	for (int i = 0; i < N; i++){
		
		scanf("%f %f %f", &N1,&N2,&N3);
		M[i] = ((N1*2)+(N2*3)+(N3*5))/10;  	
	}
	for (int i = 0; i < N; i++){	
		printf("%.1f\n", M[i]);
	}
	return 0;
}
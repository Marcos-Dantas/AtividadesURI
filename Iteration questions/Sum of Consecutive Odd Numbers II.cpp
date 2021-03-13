
#include <stdio.h>

int main () {
	
	int N,B,X,Y;
	
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &X,&Y);
		B = 0;
		if(X<Y) {
			X++;
			for (; X < Y; X++) {
				if(X%2==1){
					B+=X;
				}
			}
		}else if(X>Y) {
			Y++;
			for (; Y < X; Y++) {
				if(Y%2==1){
					B+=Y;
				}
			}
		}else 
			B = 0;
		printf("%d\n", B);
	} 
	return 0;
}
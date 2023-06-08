#include <stdio.h>

int main(){
	
	int i,N,val[100];
	printf("Enter the number of values: ");
	scanf("%d",&N);

	for(i=0;i<N;i++){
		printf("Enter value: ");
		scanf("%d",&val[i]);
	}
	printf("The reverse order is: ");
	for(i=N-1;i>=0;i--){
		
		printf("%d ",val[i]);
	}
	
	
	
	return 0;
}
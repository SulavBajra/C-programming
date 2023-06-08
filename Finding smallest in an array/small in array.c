#include<stdio.h>

int main(){
	
	int i,arr[10],smallest;
	for(i=0;i<10;i++){
		printf("Enter an integer: ");
		scanf("%d",&arr[i]);
	}
	
	smallest=arr[0];
	for(i=1;i<10;i++){
		if(smallest>arr[i])
		smallest = arr[i];
	}
	
	printf("The smallest integer is: %d",smallest);
	
	return 0;
}
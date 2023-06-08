#include<stdio.h>

int main(){
	
	int i,arr[20];
	
	for(i=0;i<20;i++){
		printf("Enter a value: ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<20;i++){
		if(i%2!=0)
		continue;
		printf("%d\n",arr[i]);
	}
	
	
	return 0;
}
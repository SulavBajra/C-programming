#include<stdio.h>

int main(){

	int value,i,check=0;
	int arr[10]={-10,10,15,25,55,150,190,201,220,250};
	
	printf("Enter a value: ");
	scanf("%d",&value);
	
	for(i=0;i<10;i++){
		if(arr[i]==value){
			check=i;
			break;
		}
	}
	
	if(value==arr[check]){
		printf("Element found at index: %d",check);
	}else{
		printf("Element not found");
	}
	
	return 0;
}
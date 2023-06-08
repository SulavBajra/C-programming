#include <stdio.h>

int main(){
	
	int i,j,arr[10];
	int a;
	for(i=0;i<10;i++){
		printf("Enter an element: ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[i]<arr[j]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	printf("The fourth largest %d",arr[3]);
	
	return 0;
}
#include<stdio.h>

int main(){
	
	int * arr[10];
	int choice,i;
	printf("Enter elements:\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d",&choice);
	for(i=0;i<10;i++){
		if(*arr==*choice){
			printf("Elements is at %d index",i);
			break;
		}
		 *(arr+1);
	}
	return 0;
}
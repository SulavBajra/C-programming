#include <stdio.h>

int main(){
	
	int i,j;
	int arr[2][3];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter the value of [%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nDisplaying in matrix form: \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
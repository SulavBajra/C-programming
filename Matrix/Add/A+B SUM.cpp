#include<stdio.h>

int main(){
	
	int i,j;
	int A[3][3];
	int B[3][3];
	int sum[3][3];
	
	printf("\nThe first matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the [%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nThe second matrix: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the [%d][%d]: ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		sum[i][j]=A[i][j]+ B[i][j];	
		}
	}
	
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
#include<stdio.h>

void give(int *ptrA){
	int i;
	for(i=0;i<10;i++){
		printf("%d\n",ptrA[i]);
	}
}

int main(){
	int Arr[10]={1,2,3,4,5,6,7,8,9,10};
	int * ptrA = &Arr[0];
	give(ptrA);
	
	return 0;
}
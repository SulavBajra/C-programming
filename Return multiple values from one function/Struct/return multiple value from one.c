#include<stdio.h>

struct calc{
	int sum;
	int sub;
	int mul;
	int div;
};

struct calc giveback(int a,int b){
	struct calc c;
	c.sum = a + b;
	c.sub = a - b;
	c.mul = a * b;
	c.div = a / b;
	return c;
}


int main(){
	int a,b;
	struct calc result;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	result = giveback(a,b);
	printf("The sum of %d and %d is:%d\n",a,b,result.sum);
	printf("The subtraction of %d and %d is:%d\n",a,b,result.sub);
	printf("The multipication of %d and %d is:%d\n",a,b,result.mul);
	printf("The division of %d and %d is:%d\n",a,b,result.div);
	
	return 0;
}
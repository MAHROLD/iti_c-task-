#include<stdio.h>
int main(){
	int a=5,b=6;
	printf("before swap\n");
	printf("a= %d , b= %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping");
	printf("a= %d , b= %d\n",a,b);
	printf("swapping again\n");
	a=a*b;
	b=a/b;
	a=a/b;
	printf("after swapping");
	printf("a= %d , b= %d\n",a,b);
}
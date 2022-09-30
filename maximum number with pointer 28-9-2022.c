#include<stdio.h>
int main(){
	int a,b,*p,*q;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	p=&a;
	q=&b;
	if(*p>*q){
		printf("maximum number is %d ",*p);
	}
	else
	printf("maximum number is %d ",*q);
}

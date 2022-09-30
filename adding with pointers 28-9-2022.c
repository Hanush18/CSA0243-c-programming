#include<stdio.h>
int main(){
	int a,b,*p,*q,sum;
	printf("enter the numbers to added :\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("sum of the two numbers :%d",sum);
	return 0;
}

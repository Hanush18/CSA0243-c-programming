#include<stdio.h>
int main(){
	int m,n, i;
	printf("enter the values of m and n:");
	scanf("%d %d",&m,&n);
	for(i=1 ;i<=n ; ++i){
		printf("%d * %d=%d\n",m,i,m*i);
	}
	return 0;
}

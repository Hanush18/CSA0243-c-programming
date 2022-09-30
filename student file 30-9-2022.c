#include <stdio.h>
#include<stdlib.h>
int main() {
	char name[50];
	int roll,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("test.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter rollnumber: ");
		scanf("%d",&roll);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,roll);
	}
	fclose(fptr);
	return 0;
}

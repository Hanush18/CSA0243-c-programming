#include <stdio.h>
 
struct student
{
    char name [30];
    int  marks[ 5];
    int  total;
    float percentage;
};
 
int main()
{
	int i,n;
	printf("enter nubmer of subjects: ");
	scanf("%d",&n);
	struct student std[n];
 
    printf("Enter name: ");
    gets(std[i].name);
 
    printf("Enter marks:\n");
    std[i].total=0;
    for(i=0;i<n;i++){
        printf("Marks in subject %d: ",i+1);
        scanf("%d",&std[i].marks[i]);
        std[i].total+=std[i].marks[i];
    }
    std[i].percentage=(float)((float)std[i].total/(float)500)*100;
 
    printf("\nName: %s \nTotal Marks: %d \nPercentage: %.2f",std.name,std.total,std.percentage);
     return 0;
}

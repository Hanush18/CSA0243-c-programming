#include <stdio.h>
int main() {
    int i,n;
    printf("Enter number of students :");
    scanf("%d",&n);
struct student {
    char name[50];
    int roll;
    float marks;
} s[n];
struct student  std;       
    struct student  *ptr;          
    ptr= &std;

    for (i = 0; i < n; ++i) {
        printf("enter roll number :");
      scanf("%d",&ptr->roll);
        printf("Enter first name: ");
        scanf("%s",&ptr->name);
        printf("Enter marks: ");
      scanf("%f",&ptr->marks);
    }
    printf("Displaying Information:\n\n");

    
    for (i=0; i<n;++i) {
        printf("\nEntered details: ");
        printf("\nname:%s",ptr->name);
        printf("\nRollno:%d",ptr->roll);
        printf("\nmarks:%f",ptr->marks);
    }
    return 0;
}


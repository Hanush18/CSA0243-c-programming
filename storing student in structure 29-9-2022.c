#include <stdio.h>
int main() {
    int i,n;
    printf("Enter number of students :");
    scanf("%d",&n);
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[n];

    for (i = 0; i < n; ++i) {
        printf("enter roll number :");
        scanf("%d",&s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    
    for (i = 0; i < n; ++i) {
        printf("\nRoll number: %d\n",s[i].roll);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}


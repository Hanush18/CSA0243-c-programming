#include<stdio.h>
int main(){
		int i,n;
	printf("enter the number of books :");
	scanf("%d",&n);
struct book
{
    char book_name[35];
    int bookid;
    char book_subject[35];
    char author[40];
}b[n];
 for(i=0; i<n; i++)
    {
        printf("Enter details of book #%d\n", i+1);
        printf("Enter book id: ");
        scanf("%d", &b[i].bookid);
        printf("Enter book name: ");
        scanf("%s",&b[i].book_name);
        printf("Enter book author: ");
        scanf("%s",&b[i].author);
        printf("Enter subject: ");
        scanf("%s", &b[i].book_subject);
    }

    for (i = 0; i < n; ++i) {
        printf("\n book id: %d\n",b[i].bookid);
        printf("book name: ");
        puts(b[i].book_name);
        printf("author:%s",b[i].author);
        printf("\nbook subject :%s",b[i].book_subject);
        printf("\n");
    }
    return 0;
}
   


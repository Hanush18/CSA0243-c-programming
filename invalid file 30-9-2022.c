#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* ptr;
    char ch;
    char filename[100];
    printf("enter filename to open :");
    scanf("%s",filename);
 
    ptr = fopen(filename, "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
}
}

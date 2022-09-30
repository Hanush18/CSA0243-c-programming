#include<stdio.h>
int main(){
 int i = 0, line = 6;
  char ch[100];
  FILE*ptr;
    ptr = fopen("test.txt","r");
    if(ptr== NULL)
    {
    printf("can not open file \n");
    return 1;
    }

    while(line--){
    fscanf(ptr,"%s",&ch[i]);
    printf("\n%s", &ch[i]);
    i++;
}   

    fclose(ptr);

    return 0;
}

//LENGTH OF A STRING
#include <stdio.h>
#define SIZE 100
int main()
{
    char A[SIZE];
    int i;
    printf("Enter the string:");
    gets(A);
    for (i=0;A[i]!='\0';i++);
    printf("Length of the string is %d",i);
    return 0;
}

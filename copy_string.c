//COPY STRING

#include <stdio.h>
#define SIZE 100
int main()
{
    char A[SIZE],B[SIZE];
    int i;
    printf("Enter string A:");
    gets(A);
    for (i=0;A[i]!='\0';i++)
    {
        B[i]=A[i];
    }
    B[i]='\0';
    printf("String B:%s",B);
    return 0;
}

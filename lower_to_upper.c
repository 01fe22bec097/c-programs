//LOWERCASE TO UPPERCASE

#include <stdio.h>
#define SIZE 100
int main()
{
    char A[SIZE];
    printf("Enter the string:");
    gets(A);
    for (int i=0;A[i]!='\0';i++)
    {
        if (A[i]>='a' && A[i]<='z')
        {
            A[i]-=32;
        }
    }
    printf("Uppercase string:%s",A);
    return 0;
}


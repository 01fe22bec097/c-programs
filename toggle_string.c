//TOGGLE CASE
#include <stdio.h>
#define SIZE 100
int main()
{
    char A[SIZE];
    printf("Enter the string:");
    gets(A);
    for (int i=0;A[i]!='\0';i++)
    {
        if (A[i]>='A' && A[i]<='Z')
        {
            A[i]+=32;
        }
        else if (A[i]>='a' && A[i]<='z')
        {
            A[i]-=32;
        }

    }
    printf("Toggled string:%s",A);
    return 0;
}

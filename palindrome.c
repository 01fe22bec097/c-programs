//PALINDROME

#include <stdio.h>
#define SIZE 100
int main()
{
    char A[SIZE];
    int len=0,flag=1;
    printf("Enter the string:");
    gets(A);
    for (int i=0;A[i]!='\0';i++)
    {
        len++;
    }
    len--;
    for (int i=0;i<len;i++,len--)
    {
        if (A[i]!=A[len])
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
    return 0;
}

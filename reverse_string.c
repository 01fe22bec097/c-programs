//REVERSING A STRING

#include <stdio.h>
#define SIZE 100
int main()
{
    char A[SIZE];
    int size=0,temp;
    printf("Enter the string:");
    gets(A);
    for (int i=0;A[i]!='\0';i++)
    {
        size++;
    }
    size--;
    for (int i=0;i<size;i++,size--)
    {
        temp=A[size];
        A[size]=A[i];
        A[i]=temp;
    }
    printf("Reversed string:%s",A);
    return 0;
}


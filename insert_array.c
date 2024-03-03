//INSERTING AN ELEMENT IN AN ARRAY

#include <stdio.h>
#define SIZE 100
int main()
{
    int arr[SIZE];
    int n,num,pos;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the element to insert:");
    scanf("%d",&num);
    printf("Enter the position to insert:");
    scanf("%d",&pos);
    printf("Enter the array:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=n;i>pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    printf("New array:\n");
    for (int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

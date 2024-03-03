//DELETING AN ELEMENT FROM AN ARRAY

#include <stdio.h>
#define SIZE 100
int main()
{
    int arr[SIZE];
    int n,pos;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the position to be deleted:");
    scanf("%d",&pos);
    printf("Enter the array:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

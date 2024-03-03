//SORTING AN ARRAY

#include <stdio.h>
#define SIZE 100
int main()
{
    int arr[SIZE];
    int n,temp;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

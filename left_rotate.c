//LEFT ROTATE AN ARRAY

#include <stdio.h>
#define SIZE 100
int main()
{
    int rot,n,temp;
    int arr[SIZE];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the number of rotations:");
    scanf("%d",&rot);
    printf("Enter the array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<rot;i++)
    {
        temp=arr[0];
        for (int j=0;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    printf("The left rotated array is:");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

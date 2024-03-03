//RIGHT ROTATE AN ARRAY

#include <stdio.h>
#define SIZE 100
int main()
{
    int rot,temp,n;
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
        temp=arr[n-1];
        for (int j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    printf("The right rotated array is ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

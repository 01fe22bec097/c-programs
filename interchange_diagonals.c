//INTERCHANGING DIAGONALS OF A MATRIX

#include <stdio.h>
#define SIZE 5
int main()
{
    int mat[SIZE][SIZE];
    int n,temp;
    printf("Size of the matrix:");
    scanf("%d",&n);
    printf("Enter the matrix:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i=0;i<n;i++)
    {
        temp=mat[i][i];
        mat[i][i]=mat[i][n-i-1];
        mat[i][n-i-1]=temp;
    }
    printf("\nNew matrix:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

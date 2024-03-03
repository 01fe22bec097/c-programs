//MULTIPLICATION OF MATRICES

#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main()
{
    int m,n1,n2,p;
    int mat1[SIZE][SIZE],mat2[SIZE][SIZE],mat3[SIZE][SIZE];
    printf("Matrix 1:\n");
    printf("Number of rows:");
    scanf("%d",&m);
    printf("Number of columns:");
    scanf("%d",&n1);
    printf("\n");
    printf("Matrix 2:\n");
    printf("Number of rows:");
    scanf("%d",&n2);
    printf("Number of columns:");
    scanf("%d",&p);
    if (n1!=n2)
    {
        printf("\nMatrix multiplication is not possible");
        exit(0);
    }
    printf("\n\n");
    printf("Enter matrix 1:\n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
    printf("Enter matrix 2:\n");
    for (int i=0;i<n2;i++)
    {
        for (int j=0;j<p;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    int n=n1;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<p;j++)
        {
            mat3[i][j]=0;
            for (int k=0;k<n;k++)
            {
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("\n\nThe resultant matrix is:\n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<p;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

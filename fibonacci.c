//FIBONACCI SERIES

#include <stdio.h>
int main()
{
    int a=0,b=1,c=0,n;
    printf("Value of n:");
    scanf("%d",&n);
    for (int i=n;i>0;i--)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}

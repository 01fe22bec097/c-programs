//HCF OF TWO NUMBERS

#include <stdio.h>
int main()
{
    int num1,num2,hcf,min;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    min=(num1<num2)?num1:num2;
    for (int i=1;i<=min;i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF(%d,%d)=%d",num1,num2,hcf);
    return 0;
}

//POWER USING LOOPS

#include <stdio.h>
int main()
{
    int num,exp,i,pow=1;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the exponent:");
    scanf("%d",&exp);
    for (i=0;i<exp;i++)
    {
        pow=pow*num;
    }
    printf("Power of the number:%d",pow);
    return 0;
}

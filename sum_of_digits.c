//SUM OF DIGITS OF A NUMBER

#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while (num!=0)
    {
        sum+=num%10;
        num=num/10;
    }
    printf("Sum of digits is %d",sum);
    return 0;
}
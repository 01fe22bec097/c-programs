//LCM OF TWO NUMBERS

#include <stdio.h>
int main()
{
    int num1,num2,lcm=0;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    int max=(num1>num2)?num1:num2;
    while (1)
    {
        lcm+=max;
        if (lcm%num1==0 && lcm%num2==0)
        {
            break;
        }
    }
    printf("LCM(%d,%d)=%d",num1,num2,lcm);
    return 0;
}

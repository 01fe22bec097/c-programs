//REVERSING A NUMBER

#include <stdio.h>
#include <math.h>
int main()
{
    int num,n,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    count=(int)(log10(num))+1;
    n=num;
    num=0;
    while (n!=0)
    {
        count--;
        num+=(n%10)*pow(10,count);
        n/=10;
    }
    printf("The reversed number is %d",num);
    return 0;
}

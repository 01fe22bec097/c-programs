//FACTORS OF THE NUMBER

#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The factors of the number are:\n");
    for (i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

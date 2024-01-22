# include <stdio.h>
int main()
{
    int num;
    printf("\n Enter the number is:");
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        printf("\n The Given Value is even number");

    }
         else
    {
        printf("\n The Given Value is odd number");
        return 0;
    }
}

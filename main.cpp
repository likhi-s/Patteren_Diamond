#include<stdio.h>
int main()
{
    int n;
    printf("Enter the odd number\n");

    scanf("%d", &n);
    if(n%2!=0 && n>=3)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(int k=1; k<=((2*i)-i);k++)
            {
                printf(" *");
            }
            printf("\n");
        }
        for(int i=n-1;i>=1;i--)
        {
            for(int j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(int k=1; k<=((2*i)-i);k++)
            {
                printf(" *");
            }
            printf("\n");
        }

    }
    else
    {
        printf("Invalid number\n");
    }
    return 0;
}


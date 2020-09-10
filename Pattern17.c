
#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int spaces = n/2;
    int stars = 1;
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=spaces;j++)
        {
            if(i==(n/2 + 1))
            {
                printf("*");
            }
            printf("\t");
        }
        for(j=1;j<=stars;j++)
        {
            printf("*\t");
        }
        if(i<(n/2 + 1))
        {
            stars = stars + 1;
        }
        else
        {
            stars--;
        }
        printf("\n");
    }
    return 0;
}

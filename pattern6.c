#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int spaces,stars;
    stars = n/2 + 1;
    spaces = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=stars;j++)
        {
            printf("*\t");
        }
        for(j=1;j<=spaces;j++)
        {
            printf("\t");
        }
        for(j=1;j<=stars;j++)
        {
            printf("*\t");
        }
        printf("\n");
        if(i<=n/2)
        {
            stars--;
            spaces=spaces+2;
        }
        else
        {
            stars++;
            spaces=spaces-2;
        }
    }
    return 0;
}

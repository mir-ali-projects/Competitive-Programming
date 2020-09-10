
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            
            if(j==1 || j==n)
            {
                printf("*\t");
            }
            else if((i==j || (i + j) == (n+1))&&i>n/2 )
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
            
        }
        printf("\n");
    }
   
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
    }
    if(n!=1)
    {
        printf("%d",n);
    }
}

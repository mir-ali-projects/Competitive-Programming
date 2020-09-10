
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j,icj,icj1;
    for(i=0;i<n;i++)
    {
        int icj = 1;
        for(j=0;j<=i;j++)
        {
            printf("%d\t",icj);
            icj1 = (icj*(i-j))/(j+1);
            icj = icj1;
        }
        printf("\n");
    }

    return 0;
}

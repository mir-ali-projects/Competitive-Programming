#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,n,j,k,l,arr[100000];
    for(i=0;i<t;i++)
    {
        int count =0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        
        for(k=0;k<n;k++)
        {
            for(l=k+1;l<n;l++)
            {
                if(arr[k]>arr[l])
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0 ;
}

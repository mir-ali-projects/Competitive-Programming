#include <stdio.h>
#include <malloc.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int *arr = (int *)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    for(i=max;i>=1;i--)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>=i)
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
    return  0;
}

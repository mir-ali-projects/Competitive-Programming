#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1;
    scanf("%d",&n1);
    int *arr1 = (int *)malloc(sizeof(int)*n1);
    int i;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    int n2;
    scanf("%d",&n2);
    int *arr2 = (int *)malloc(sizeof(int)*n2);
    int j,k;
    for(j=0;j<n2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    int *arr3 = NULL;
    if(n1>=n2)
    {    k = n1;
        *arr3 = (int *)malloc(sizeof(int)*n1);
    }
    else
    { k = n2;
     *arr3 = (int *)malloc(sizeof(int)*n2);
    }
    int c = 0;
    while(k>=0)
    {
        int d = c;
        if(i>=0)
        {
          d =  d + arr1[i];  
        }
        if(j>=0)
        {
          d =  d + arr2[j];  
        }
    
        d = d%10;
        c = d/10;
        arr3[k] = d;
        i--;
        j--;
        k--;
    }
    if(c!=0)
    {
        printf("%d",c);
    }
    for(i=0;i<k;i++)
    {
        printf("%d",arr3[i]);
    }
    return 0;
}

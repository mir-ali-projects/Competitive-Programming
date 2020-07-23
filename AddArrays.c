#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    int n,i,j;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int *A = (int *)malloc(n*sizeof(int));
        int *B = (int *)malloc(n*sizeof(int));
        
        for(j=0;j<n;j++)
        {
            scanf("%d",A+j);
        }
        for(j=0;j<n;j++)
        {
            scanf("%d",B+j);
        }
        int *C =(int *)malloc(n*sizeof(int));
        for(j=0;j<n;j++)
        {
            C[j]=A[j]+B[j];
        }
        for(j=0;j<n;j++)
        {
         printf("%d ",C[j]);
        }
        
    }
    return 0;
}

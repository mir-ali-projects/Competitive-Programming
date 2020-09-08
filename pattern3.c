#include <stdio.h>
#include <stdlib.h>
int main()
{
      int n;
      scanf("%d",&n);
      int i,j,k;
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=n-i;j++)
          {
              printf("\t");
          }
          for(k=1;k<=i;k++)
          {
              printf("*\t");
          }
          printf("\n");
      }
    return 0;
}
